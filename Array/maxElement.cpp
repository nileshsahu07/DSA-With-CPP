#include <iostream>
#include <climits>
using namespace std;

int maxElement(int *arr, int n){
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    // firstMax=>
    for(int i= 0; i<n; i++){
        if( firstMax < arr[i] ){
            firstMax = arr[i];
        }
    }
    cout<<"Maximum Element in this array is:- "<<firstMax;
}

void printArray(int *arr, int n){
    cout<<"Array is:- ";
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {4,3,20,5,9,8,1,2};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

    maxElement(arr,n);

    // SMaxElement(arr,n,firstMax);

    // cout<<maxElement(arr,n)<<endl;


    return 0;
}