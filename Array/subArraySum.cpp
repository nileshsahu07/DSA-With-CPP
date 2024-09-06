#include <iostream>
#include <climits>
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

void printSubArray(int *arr, int n){

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;  
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            cout<<endl;
            cout<<sum<<" "; 
        }
    }
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);
    printSubArray(arr,n);

    return 0;
}