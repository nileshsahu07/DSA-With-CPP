#include <iostream>
#include <climits>
using namespace std;

int firstMax = INT_MIN;
int secondMax = INT_MIN;
int thirdMax = INT_MIN;

int firstMaxElement(int *arr, int n){
    for(int i = 0; i<n; i++){
        if(firstMax<arr[i]){
            firstMax = arr[i];
        }
    }
    // cout<<"First Max Element is:- "<<firstMax<<endl;
    return firstMax;
}

int secondMaxElement(int *arr, int n){
    int fm = firstMaxElement(arr,n);

    for(int i = 0; i<n; i++){
        if(secondMax<arr[i] && arr[i] < fm){
            secondMax = arr[i];
        }
    }
    // cout<<"Second Max Element is:- "<<secondMax<<endl;
    return secondMax;
}

int thirdMaxElement(int *arr, int n){
    int sm = secondMaxElement(arr,n);

    for(int i=0; i<n; i++){
        if(thirdMax<arr[i] && arr[i] < sm){
            thirdMax = arr[i];
        }
    }
    // cout<<"Third Max Element:- "<<thirdMax;
    return thirdMax;
}

void takeInput(int *arr, int n){
    cout<<"Enter the Element of an Array:- ";
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

    cout<<"First Max Element is:- "<<firstMaxElement(arr,n)<<endl;
    cout<<"Second Max Element is:- "<<secondMaxElement(arr,n)<<endl;
    cout<<"Third Max Element is:- "<<thirdMaxElement(arr,n)<<endl;

    return 0;
}