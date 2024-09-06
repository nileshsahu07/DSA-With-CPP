#include <iostream>
using namespace std;

int main(){

    int unit;
    cout<<"Enter units:- ";
    cin>>unit;

    int RatePerUnit;

    if(unit<50){
        unit = 0.50;
    }

    return 0;
}