#include <iostream>
#include <cstdio>
using namespace std;

// Print Array 
void printArray(int *A , int n ){ // A is Array & n is size of Array!
    for(int i =0; i<n ; i++){
        printf("%d ",A[i]);
    }
    printf("\n"); // gap 
}

void insertionSort(int *A, int n){
    int key , j; // int j
    // Loop the passes 
    for( int i = 1; i<=n-1 ; i++){
        key = A[i];
        j= i-1;
    // Loop each passes 
    while( j>=0 && A[j] > key) // asscending > key
                               // descending < key
    {
        A[j+1] = A[j]; // decrement of j 
        j--;
    }
    A[j+1] = key;
}
}


int main(){
    int A[] = { 12, 54, 65, 7, 23, 9};
    int n= 6;
    printArray(A, n);
    insertionSort(A,n);
    printArray(A, n);
    return 0;
}

