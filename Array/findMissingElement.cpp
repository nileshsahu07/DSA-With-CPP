#include <iostream>
using namespace std;

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

int findMissing(int *arr, int n){
    int Sum = 0;
    for(int i=0; i<n; i++){
        Sum = Sum+arr[i];
    }

    int numSum = 0;
    for(int i=arr[0]; i<=arr[n-1]; i++){
        numSum = numSum+i;
    }

    return numSum-Sum;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);
    int ans = findMissing(arr,n);
    cout<<"Missing Element :- "<<ans<<endl;

    return 0;
}