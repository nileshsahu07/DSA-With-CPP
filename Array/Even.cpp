#include <iostream>
using namespace std;

void EvenNum(int *arr,int n, int *evenArr, int &size){
    
    for(int i=0; i<n; i++){

        if(arr[i]%2 == 0){
            evenArr[size] = arr[i];
            size++;
        }
    }

    cout<<"Even Array:- ";
    for(int i=0; i<size; i++){
        cout<<evenArr[i]<<" ";
    }
    cout<<endl;
    
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

    int size = 0;
    int *evenArr = new int[size];

    takeInput(arr,n);
    printArray(arr,n);

    EvenNum(arr,n,evenArr,size);

    cout<<size<<endl;

    return 0;
}