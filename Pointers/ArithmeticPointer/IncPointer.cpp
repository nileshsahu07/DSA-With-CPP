#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;

    cout<<"Address of a:- "<<p1<<endl;
    cout<<"Address of b:- "<<p2<<endl;

    cout<<p1+1<<endl;
    // cout<<p1++<<endl;
    // cout<<p1<<endl;
    // cout<<++p1<<endl;
    // cout<<p1<<endl;


    // int x = *p1+1;
    // cout<<x<<endl;

    // int *y = p1+1;
    // cout<<y<<endl;





    return 0;
}