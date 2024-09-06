#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Enter First Numbers:- ";
    cin>>a;

    cout<<"Enter Second Numbers:- ";
    cin>>b;

    char ch;
    cout<<"Enter an Operator (+, -, *, /, %):- ";
    cin>>ch;

    switch(ch){
        case '+':
            cout<<"Sum:- "<<a<<" + "<<b<<" = "<<a+b<<endl;
            break;
        case '-':
            cout<<"Sub:- "<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;
        case '*':
            cout<<"Mul:- "<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;
        case '/':
            cout<<"Div:- "<<a<<" / "<<b<<" = "<<a/b<<endl;
            break;
        case '%':
            cout<<"Mod:- "<<a<<" % "<<b<<" = "<<a%b<<endl;
            break;
        default:
            cout<<"Invalid Operator";
            break;

    }
    
    
    return 0;

}