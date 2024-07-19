#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>&Vec)
{
    int size=Vec.size();

    for(int i=0;i<size;i++)
    {
        cout<<Vec[i]<<" ";
    }

}

bool Order(int &a, int &b)
{
    return a>b;  //{20,10}, here you gave the array as example like it should be like that;
}


int main()
{
    vector<int>Vec={1,2,3,4,5};
    cout<<"Before using sort function in decreasing order: ";
    print(Vec);
    cout<<endl;

    sort(Vec.begin(),Vec.end(),Order);
    cout<<"After: ";
    print(Vec);
}
