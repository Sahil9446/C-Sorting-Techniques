#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>&v)
{
    int size=v.size();

    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }

}

int main()
{
    vector<int>V={5,4,3,2,1};
    cout<<"Before using sort function: ";
    print(V);

    cout<<endl;

    sort(V.begin(),V.end()); //Sorting in increasing order;

    cout<<"After using sort function: ";
    print(V);
}