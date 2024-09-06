#include <iostream>
using namespace std;

void printArr(int arr[][3], int r, int c){
    cout<<"Array is:- "<<endl;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};

    printArr(arr,2,3);

    return 0; 
}