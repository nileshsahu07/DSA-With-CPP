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

int digitCount(int num){
    int dcount = 0;
    while(num!=0){
        dcount++;
        num = num/10;
    }
    return dcount;
}

int countEvenDigitInArray(int *arr, int n){
    int count = 0;

    for(int i=0; i<n; i++){
        if(digitCount(arr[i])%2==0){
            count++;
        }
    }
    return count;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);
    int ans = countEvenDigitInArray(arr,n);
    cout<<ans<<endl;

    return 0;
}