#include <iostream>
using namespace std;

int main(){

    int *p = new int(10);

    cout<<p<<endl;
    cout<<*p<<endl;

    delete p;

    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}