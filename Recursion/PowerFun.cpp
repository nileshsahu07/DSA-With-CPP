#include <iostream>
using namespace std;

int WithFun(int b, int e){
    int pow = 1;
    while(e!=0){
        pow = pow*b;
        e--;
    }
    return pow;
}

int WithRecursion(int b, int e){
    int pow = 1;
    if(e==0){
        return 1;
    }

    return b*WithRecursion(b,e-1);
}

int main(){

    int b;
    cout<<"Enter the Base Value:- ";
    cin>>b;

    int e;
    cout<<"Enter the Exponent Value:- ";
    cin>>e;

    cout<<WithFun(b,e)<<endl;
    cout<<WithRecursion(b,e)<<endl;

    return 0;
}