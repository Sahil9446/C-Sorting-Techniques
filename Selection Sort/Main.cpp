#include<iostream>
#include<vector>
using namespace std;


void print(vector<int>Vec)
{
    int size=Vec.size();

    for(int i=0;i<size;i++)
    {
        cout<<Vec[i]<<" ";
    }
    cout<<endl;
}
// COMPARING FIRST ELEMENT WITH THE REST OF THE ELEMENT;
// Time Complexity: O(n^2);
void SelectionSort(vector<int>&Vec)
{
    int size=Vec.size();
    for(int i=0;i<size-1;i++)
    {
        int MinIndex=i; //ith element is the smallest for now;
        for(int j=i+1;j<size;j++) //initialise j with element next to i so that we can compare them;
        {
            // Compare the first element which is ith element means 0 index element stored in MinIndex and compare it with the next element of the array and if they are smaller then the MinIndex then update the MinIndex so that we can swap vec[j] with vec[MinIndex];
            if(Vec[j]<Vec[MinIndex])
            {
                MinIndex=j;
            }
        }
        // Swap the ith element and MinIndex element;
        swap(Vec[i], Vec[MinIndex]);
    }
}

void DecreasingOrderSelectionSort(vector<int>&Vec)
{
    int size=Vec.size();

    for(int i=0;i<size-1;i++)
    {
        int MinIndex=i;

        for(int j=i+1;j<size;j++)
        {
            if(Vec[j]>Vec[MinIndex]) //Difference is here only;
            {
                MinIndex=j;
            }
        }

        swap(Vec[i],Vec[MinIndex]);
    }
}

int main()
{
    vector<int>Vec={5,4,3,2,1};

    cout<<"Vector Before Swapping: ";
    print(Vec);

    cout<<"Vector after Swapping: ";
    SelectionSort(Vec);
    // DecreasingOrderSelectionSort(Vec);
    print(Vec);

}