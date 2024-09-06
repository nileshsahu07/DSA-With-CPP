#include <iostream>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        
        if(arr[i] > arr[minIndex]){
            swap(arr[i],arr[minIndex]);
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

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}