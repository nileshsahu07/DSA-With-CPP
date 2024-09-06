#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    int *p = &x;

    cout<<"value of x:- "<<x<<endl;
    cout<<"address of x:- "<<p<<endl;
    cout<<"value of x:- "<<*p<<endl;

    // int *p = &p; pointer variable ka address dusre pointer me nhi dal sakte hum isliye double pointer ka use karte hai

    int **ptr = &p;

    cout<<"address of p:- "<<ptr<<endl;
    cout<<"value of p:- "<<*ptr<<endl; // p ki value me address store hai x ka isliye ye x ka address show kar rha hai
    cout<<"value of a variable which address is store in p:- "<<**ptr<<endl;




    return 0;
}