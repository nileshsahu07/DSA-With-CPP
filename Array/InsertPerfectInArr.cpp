#include <iostream>
using namespace std;

int checkPerfect(int num){
    int sum = 0;
       for(int i=1; i<=num/2; i++){
            if(num%i == 0){
                sum = sum+i;
            }
       }
    if(sum == num){
        return true;
    }else{
        return false;
    }
}

void isPerfect(int start, int end, int *perfectArr, int &size){
    for(int i=start ; i<=end; i++){
        if(checkPerfect(i)){
            perfectArr[size] = i;
            size++;
        }
    }
    
    cout<<"Perfect number between "<<start<<" to "<<end<<" :- ";
    for(int i=0; i<size; i++){
        cout<<perfectArr[i]<<" ";
    }
    cout<<endl;
}

int main(){

   int start ;
   cout<<"Enter starting value:- ";
   cin>>start; 

   int end;
   cout<<"Enter ending value:- ";
   cin>>end;

    int size = 0;
    int *perfectArr = new int [size];

    isPerfect(start,end,perfectArr,size);

    return 0;
}