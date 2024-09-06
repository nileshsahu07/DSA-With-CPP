#include <iostream>
#include <climits>
using namespace std;

int firstMax = INT_MIN;
int secondMax = INT_MIN;

int firstMaxElement(int *arr, int n){
    for(int i = 0; i<n; i++){
        if(firstMax<arr[i]){
            firstMax = arr[i];
        }
    }
    cout<<"First Max Element is:- "<<firstMax<<endl;
    return firstMax;
}

void secondMaxElement(int *arr, int n){
    int fm = firstMaxElement(arr,n);

    for(int i = 0; i<n; i++){
        if(secondMax<arr[i] && arr[i] < fm){
            secondMax = arr[i];
        }
    }
    cout<<"Second Max Element is:- "<<secondMax;
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

    firstMaxElement(arr,n);
    secondMaxElement(arr,n);

    return 0;
}