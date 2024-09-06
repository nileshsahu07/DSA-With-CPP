#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int binarySearch(int *arr, int n, int key){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]< key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
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

    bubbleSort(arr,n);
    printArray(arr,n);

    int key;
    cout<<"Enter the key for search in Array:- ";
    cin>>key;

    int ans = binarySearch(arr,n,key);

    if(ans == -1){
        cout<<"Key is not found";
    }else{
        cout<<key<<" is found on index no. "<<ans<<endl;
    }

    return 0;
}