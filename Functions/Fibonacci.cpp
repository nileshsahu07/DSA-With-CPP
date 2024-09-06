#include <iostream>
using namespace std;

int fib(int n){

    int first = 0 ;
    int second = 1;

    int next = 0;

    if(n==0 || n==1){
        return n;
    }else{
        for(int i=2; i<=n; i++){
        next = first + second;
        first = second;
        second = next;
        }
    }
    return next;
}

int main(){

    int n;
    cout<<"Enter Number:- ";
    cin>>n;

    // cout<<fib(n)<<endl;

    for(int i=0; i<=n; i++){
        cout<<fib(i)<<" ";
    }

    return 0;
}