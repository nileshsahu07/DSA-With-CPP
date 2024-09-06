#include <iostream>
using namespace std;

void groupReverse(int *arr, int n){
    for(int i=0; i<n; i=i+2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);      
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

    groupReverse(arr,n);
    printArray(arr,n);

    return 0;
}