#include <iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
      for(int j=i-1; j>=0; j--){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
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

    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}