#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&Vec)
{
    for(int i=0;i<Vec.size();i++)
    {
        cout<<Vec[i]<<" ";
    }
}

// COMPARING THE FIRST TWO ELEMENTS IS BUBBLE SORT;
// Time Complexity is O(n^2);
void IncreasingOrderBubbleSort(vector<int>&Vec)
{
    int n = Vec.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(Vec[j]>Vec[j+1])
            {
                swap(Vec[j],Vec[j+1]);
            }
        }
    }
}

void DecreasingOrderBubbleSort(vector<int>&Vec)
{
    int n=Vec.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(Vec[j]<Vec[j+1])
            {
                swap(Vec[j],Vec[j+1]);
            }
        }
    }
}

int main()
{
    vector<int>Vec={5,4,3,2,1};
    
    cout<<"Before Bubble Sorting: ";
    print(Vec);
    cout<<endl;

    IncreasingOrderBubbleSort(Vec);

    cout<<"After Bubble sort implementation: ";
    print(Vec);


}