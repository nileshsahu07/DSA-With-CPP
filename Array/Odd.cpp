#include <iostream>
using namespace std;

void OddNum(int *arr,int n, int *oddArr, int &size){
    
    for(int i=0; i<n; i++){

        if(arr[i]%2 != 0){
            oddArr[size] = arr[i];
            size++; 
        }
    }

    for(int i=0; i<size; i++){
        cout<<oddArr[i]<<" ";
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
    int *oddArr = new int[size];

    takeInput(arr,n);
    printArray(arr,n);

    OddNum(arr,n,oddArr,size);

    cout<<size<<endl;

    return 0;
}