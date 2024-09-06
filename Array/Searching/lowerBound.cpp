#include <iostream>
using namespace std;

int firstOcc(int *arr, int n,int key){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]<key){
            s = mid+1;
        }else{
            e = mid -1;
        }
    }
    return ans;
}


int lastOcc(int *arr, int n,int key){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }else if(arr[mid]<key){
            s = mid+1;
        }else{
            e = mid -1;
        }
    }
    return ans;
}

void printArray(int *arr, int n){
    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] =  {1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

    int key;
    cout<<"Enter the key:- ";
    cin>>key;

    int lb = firstOcc(arr,n,key);
    cout<<"First Occ:- "<<lb<<endl;

    int ub = lastOcc(arr,n,key);
    cout<<"Last Occ:- "<<ub<<endl;

    return 0;
}