#include <iostream>
using namespace std;


int main(){

    int *arr = new int[5];

    cout<<"Enter Elements in Array:- ";
    for(int i = 0 ; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Array is:- ";
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    // delete arr;

    for(int i=0; i<5; i++){
        delete arr;
        arr++;
    }

    cout<<"Array is:- ";
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    arr = nullptr;

    cout<<"Array is:- ";
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}