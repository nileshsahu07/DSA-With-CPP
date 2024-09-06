#include <iostream>
#include <climits>
using namespace std;

int firstMin = INT_MAX;
int secondMin = INT_MAX;

int firstMinElement(int *arr, int n){
    for(int i = 0 ; i<n; i++){
        if(firstMin > arr[i] ){
            firstMin = arr[i];
        }
    }
    cout<<"First Min Element is:- "<<firstMin<<endl;
    return firstMin;
}

void secondMinElement(int *arr, int n){
    int fm = firstMinElement(arr,n);

    for(int i=0; i<n; i++){
        if(secondMin > arr[i] && arr[i] > fm){
            secondMin = arr[i];
        }
    }
    cout<<"Second Min Element is:- "<<secondMin;
}

void takeInput(int *arr, int n){
    cout<<"Enter the Elements in Array:- ";
    for(int i=0; i<n; i++){
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

    firstMinElement(arr,n);
    secondMinElement(arr,n);

    return 0;
}