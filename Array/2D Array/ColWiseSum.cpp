#include <iostream>
using namespace std;

void colWise(int arr[][4], int r, int c){
    cout<<"Col Wise Array sum is:- "<<endl;
    for(int j=0; j<c; j++){
        int sum = 0;
        for(int i=0; i<r; i++){
           sum = sum+arr[i][j];
        }
        cout<<endl;
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24}};

    colWise(arr,3,4);

    return 0; 
}