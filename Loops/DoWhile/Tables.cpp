#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int a;
    cout<<"Enter a value:- ";
    cin>>a;
    do{
        cout<<i*a<<endl;
        i++;
    }
    while(i<=10);
}