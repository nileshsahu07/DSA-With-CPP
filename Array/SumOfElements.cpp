#include <iostream>
using namespace std;

void arrayElementSum(int *arr, int size){
        int sum = 0 ;
        for (int i = 0; i<size; i++){
            sum = sum+ arr[i];
        }
        cout<<"sum is :- "<<sum<<endl;
    }

void printArray(int *arr, int size){
    cout<<"Array is :- ";
    for(int i = 0 ; i <6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    

int main(){

    int arr[] = {2,8,7,4,9,6};

    int size = sizeof(arr)/sizeof(int);

    printArray(arr,size);

    arrayElementSum(arr,size);
    

    return 0;
}