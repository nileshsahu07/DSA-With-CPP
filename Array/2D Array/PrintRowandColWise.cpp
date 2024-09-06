#include <iostream>
using namespace std;

void rowWise(int arr[][4], int r, int c){
    cout<<"Row Wise Array is:- "<<endl;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void colWise(int arr[][4], int r, int c){
    cout<<"Col Wise Array is:- "<<endl;
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[3][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24}};

    rowWise(arr,3,4);
    colWise(arr,3,4);

    return 0; 
}