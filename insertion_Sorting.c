#include <stdio.h>

void insertion(int A[], int n)
{
    int key,j,i; //Declaration of variables
    for(i=1;i<n;i++){
        key=A[i]; //20 will be stored in "key" variable;
        j=i-1; //"j" will be at 40 before i;
        
        while(j>=0 && A[j]>key){ //"j" should be more than 0 and element in "j" place should be more than "key"
            A[j+1]=A[j]; 
            j=j-1;
        }
        A[j+1]=key;
    }
}


int main()
{
    int A[]={40,20,100,160,80,120,240,200,360,400}; //Array A is created;
    int n=10; //"n" represent the size of the Array A;
    int i;
    
    printf("Array before insertion Sort:");
    for (i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    
    insertion(A,n); //Calling the "insertion" function with formal parameter "A" and "n";
    
    printf("\nArray before insertion Sort:");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    
    return 0;
    
}


//The Time Complexity of insertion sorting will be O(n^2);
// Best Case: O(n) (in Ascending order);
// Average Case: O(n^2);
// Worst Case: O(n^2) (in Descending order);
// The number of passes will be (n-1) passes;
// The number of comparison will be 1+2+3+4....+n-1 = n(n-1)/2 = O(n^2) where n is the size of the array;
// The number of Shifts will be same as the number of comparison;
