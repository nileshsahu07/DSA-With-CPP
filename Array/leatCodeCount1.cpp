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

int countOne(int *arr, int n){
    int count = 0;
    int maxCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            if(maxCount<count){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }
    return maxCount;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);

    int ans = countOne(arr,n);
    cout<<ans<<endl;

    return 0;
}