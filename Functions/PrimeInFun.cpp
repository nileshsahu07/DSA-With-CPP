#include <iostream>
using namespace std;

void primeNumber(int n){

    bool flag = true;

    if(n<2){
        flag = false;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i == 0){
                flag = false;
            }
        }
    }

    if(flag==true){
        cout<<"Yes "<<n<<" is a Prime Number";
    }else{
        cout<<"No "<<n<<" is not a Prime Number";
    }
}

int main(){

    int n;
    cout<<"Enter Number:- ";
    cin>>n;

    primeNumber(n);

    return 0;
}