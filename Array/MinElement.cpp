#include <iostream>
#include <climits>
using namespace std;

void minElement(int *arr, int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum Number of this Array:- "<<min<<endl;
}


void myArray(int *arr,int size){
    cout<<"Array is:- ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);

    myArray(arr,size);

    minElement(arr,size);

    return 0;
}