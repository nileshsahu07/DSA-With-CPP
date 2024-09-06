#include <iostream>
using namespace std;

int checkPrime(int num){
        if(num<2){
            return false;
        } 
        else{
            for(int i=2; i<num; i++){
                if(num%i == 0){
                    return false;
                }
            }
        }
        return true;
}

void isPrime(int start, int end, int *primeArr, int &size){
    for(int i=start ; i<=end; i++){
        if(checkPrime(i)){
            primeArr[size] = i;
            size++;
        }
    }
    
    cout<<"Prime number between "<<start<<" to "<<end<<" :- ";
    for(int i=0; i<size; i++){
        cout<<primeArr[i]<<" ";
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
    int *primeArr = new int [size];

    isPrime(start,end,primeArr,size);

    return 0;
}