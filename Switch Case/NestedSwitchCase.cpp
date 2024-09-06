#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a value:- ";
    cin>>a;

    switch(a==0){
        case true:
            cout<<"Number is Zero";
            break;
        case false:
            switch(a>0){
                case true:
                    cout<<"Number is Positive";
                    break;
                case false:
                    cout<<"Number is Negative";
            }

    }


    return 0;

}