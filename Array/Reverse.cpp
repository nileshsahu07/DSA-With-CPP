#include <iostream>
using namespace std;

int arrayReverse(int *arr, int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void takeInput(int *arr, int n){
    cout<<"Enter the value of Array:- ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void printArray(int *arr, int n){
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

    cout<<&arr[0]<<endl;
    cout<<arr[0]<<endl;

    arrayReverse(arr,n);

    printArray(arr,n);

    cout<<&arr[0]<<endl;
    cout<<arr[0]<<endl;

    return 0;
}