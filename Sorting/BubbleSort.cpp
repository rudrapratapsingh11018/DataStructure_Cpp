#include <iostream>
#include <cstdio>
using namespace std;
void printArray( int*A, int n){
     for(int i =0; i<n; i++){
        printf("|%d| ", A[i]);
     }
     cout<<endl;
}
void BubbleSort( int*A , int n){
    int temp;
    int isSorted=0;
    int i;
    // for no. of pass
    printf("Working on pass number %d \n", i+1);
    isSorted = 1;
     for ( int i=0 ; i < n-1; i++){

        // for comparison in each pass
        for(int j=0 ; j< n-1-i; j++){

            //check whether it is required to swap?
            if(A[j] > A[j+1]){ 
                // yes , Need to swap
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] =temp;
                isSorted =0;
        }
        }
        if(isSorted){
            return; 
        }
     }
    }
int main(){
int A[] = {1 ,2,3,4,9,2};
int n=6;
 printArray(A,n);// printing the array before sorting
 BubbleSort(A,n);// function to sort the array
 printArray(A,n);// printing thr array after sorting 

 return 0;
}