#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    int i = 0;
    for( ; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }

    cout<<"eye:- "<<i<<endl;

    if(i==n){
        return -1; 
    }
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

    takeInput(arr,n);
    printArray(arr,n);

    int key;
    cout<<"Enter the key for search in Array:- ";
    cin>>key;

    int ans = linearSearch(arr,n,key);

    if(ans == -1){
        cout<<"Key is not found";
    }else{
        cout<<key<<" is found on index no. "<<ans<<endl;
    }

    return 0;
}