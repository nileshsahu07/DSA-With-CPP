#include <iostream>
using namespace std;

void arrayAverage(int *arr, int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    
    cout<<"Sum is:- "<<sum<<endl;
    float average = sum/n;
    cout<<"This array average is:-  "<<average<<endl;
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

    arrayAverage(arr,n);


    return 0;
}