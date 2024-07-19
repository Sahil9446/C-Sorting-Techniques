#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void print(vector<vector<int>>&v)
{
    int size=v.size();

    cout<<"The elements are: "<<endl;
    vector<int>temp;
    for(int i=0;i<size;i++)
    {
        temp=v[i]; //to store the vector(row) inside the vector in temp vector;
        int a=temp[0];
        int b=temp[1];
        cout<<"[";
        cout<<a<<" "<<b<<"";
        cout<<"]";

    }
}

bool Comparator(vector<int>&a, vector<int>&b)
{
    return a[1]<b[1]; //HOW WOULD YOU WANT TO KEEP YOUR ELEMENTS? 
}

int main()
{
    vector<vector<int>>v;

    int size;
    cout<<"Enter the size: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        int a;
        int b;
        cout<<"Enter a,b"<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    cout<<"Before sorting with respect to the second element: "<<endl;
    print(v);

    cout<<endl;
    sort(v.begin(),v.end(), Comparator);
    cout<<"After sorting with respect to the second element: "<<endl;
    print(v);

}