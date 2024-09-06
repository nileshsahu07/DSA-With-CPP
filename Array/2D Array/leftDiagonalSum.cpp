#include <iostream>
using namespace std;

void rowWise(int arr[][3], int r, int c){
    cout<<"Row Wise Array is:- "<<endl;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void leftDiagonalSum(int arr[][3], int r, int c){
    cout<<"Left Diagonal sum is:- "<<endl;
        int sum = 0;
        for(int i = 0; i<r; i++){
            sum = sum +arr[i][i];
        }
        cout<<sum<<endl;
}

void rightDiagonalSum(int arr[][3], int r, int c){
    cout<<"Left Diagonal sum is:- "<<endl;
    int sum = 0;
    for(int i=r-1; i>=0; i--){
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    rowWise(arr,3,3);
    leftDiagonalSum(arr,3,3);
    rightDiagonalSum(arr,3,3);

    return 0; 
}