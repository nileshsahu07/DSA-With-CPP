#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

void takeInput(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<"Enter the value of "<<i<<" index in Array:- ";
        cin>>arr[i];
    }
    cout<<endl;
}

void printArray(int *arr, int n){
    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}