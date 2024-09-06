#include <iostream>
using namespace std;

void deletion(int &n, int *arr, int pos){

    for(int i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
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

    int pos;
    cout<<"Enter the position:- ";
    cin>>pos;

    deletion(n,arr,pos);
    printArray(arr,n);

    return 0;
}