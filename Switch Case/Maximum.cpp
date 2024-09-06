#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a value:- ";
    cin>>a;

    int b;
    cout<<"Enter b value:- ";
    cin>>b;

    switch(a>b){
        case 1: //here we can write true also instead of 1
            cout<<"A is greater than B";
            break;
        case 0: //here we can write false also instead of 0
            cout<<"B is greater than A";
            break;

        //in two comparison we don't need to write default statement.
    }

    return 0;
}