#include <iostream>
using namespace std;

void wavePrint(int arr[][4], int r, int c){
    cout<<"Wave Array is:- "<<endl;
    for(int j = 0; j<c; j++){
        if(j%2==0){
            for(int i=0; i<r;  i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=r-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24}};

    wavePrint(arr,3,4);

    return 0; 
}