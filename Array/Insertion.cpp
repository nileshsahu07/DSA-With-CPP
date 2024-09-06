#include <iostream>
using namespace std;

void insertion(int &n, int *arr, int pos, int key){
    for(int i=n-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    n++;
    arr[pos] = key;
    cout<<"Insertion size:- "<<n<<endl;
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

    int pos;
    cout<<"Enter the position:- ";
    cin>>pos;

    int key;
    cout<<"Enter the key:- ";
    cin>>key;

    // multiple key insert karnne ke liye
    // for(int i=0; i<=5 ;i++){
    //     int pos;
    //     cout<<"Enter the position:- ";
    //     cin>>pos;

    //     int key;
    //     cout<<"Enter the key:- ";
    //     cin>>key;

    //     insertion(n,arr,pos,key);
    // }

    insertion(n,arr,pos,key);
    printArray(arr,n);

    cout<<"main size:- "<<n<<endl;

    return 0;
}