#include <iostream>
using namespace std;

void rowWise(int arr[][4], int r, int c){
    cout<<"Row Wise Array sum    is:- "<<endl;
    for(int i = 0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum = sum+arr[i][j];
        }
        cout<<endl;
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[3][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24}};

    rowWise(arr,3,4);

    return 0; 
}