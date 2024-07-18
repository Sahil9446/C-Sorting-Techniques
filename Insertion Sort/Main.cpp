#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int>&Vec)
{
    int size=Vec.size();

    for(int i=0;i<size;i++)
    {
        cout<<Vec.at(i)<<" ";
    }
    cout<<endl;
}


void InsertionSort(vector<int>&Vec)
{
    int size=Vec.size();

    // Ignore first element means i=1;
    for(int i=1;i<size;i++)
    {
        int key=Vec[i]; //Assigning the first index element with key;
        int j=i-1; //assigning j to the element before i means 0th position element;
        while(j>=0 && Vec[j]>key)
        {
            Vec[j+1]=Vec[j]; //Assigning the value on second position means swapping the 0th and 1st element;
            j--;    //J will be OUT OF BOUND and a free space will be created;
        }
        Vec[j+1]=key; //Putting key at the free space;
    }
}


void DecreasingInsertionSort(vector<int>&Vec)
{
    int size=Vec.size();

    for(int i=1;i<size;i++)
    {
        int key=Vec[i];
        int j=i-1;
        while(j>=0 && Vec[j]<key) //Difference is here;
        {
            Vec[j+1]=Vec[j];
            j--;
        }
        Vec[j+1]=key;

    }
}


int main()
{

    vector<int>Vec={5,4,3,2,1};
    cout<<"Vector before Insertion Sort: ";
    Print(Vec);

    InsertionSort(Vec);
    cout<<"Vector after selection sort: ";
    Print(Vec);
    return 0;
}