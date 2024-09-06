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

void kadansAlgorithm(int *arr, int n){
    int maxSum = 0;
    int currentSum = 0;

    for(int i=0; i<n; i++){
        currentSum+=arr[i];

        if(currentSum<0){
            currentSum = 0;
        }

        if(maxSum<currentSum){
            maxSum=currentSum;
        }
    }
    cout<<"Max Sum is:- "<<maxSum<<endl;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);
    kadansAlgorithm(arr,n);

    return 0;
}