#include <iostream>
using namespace std;

int swap(int &a ,int &b){
    
    cout<<"Before swap in swap a:- "<<a<<endl;
    cout<<"before swap in swap b:- "<<b<<endl;
    cout<<endl;

    int temp = a;
    a=b;
    b=temp;

    cout<<"After swap in swap a:- "<<a<<endl;
    cout<<"After swap in swap b:- "<<b<<endl;
    cout<<endl;
}

int main(){

    int a;
    cout<<"Enter a value:- ";
    cin>>a;

    int b;
    cout<<"Enter b value:- ";
    cin>>b;

    cout<<endl;

    cout<<"Swap before in main a:- "<<a<<endl;
    cout<<"Swap before in main b:- "<<b<<endl;
    cout<<endl;

    swap(a,b);
    
    cout<<"Swap after in main a:- "<<a<<endl;
    cout<<"Swap after in main a:- "<<b<<endl;

    cout<<endl;

    return 0;
}