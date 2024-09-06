#include <iostream>
using namespace std;

int main(){

    int a = 10;
    float b = 30.45;
    double d = 45.2738721983;

    void *p = &a;
    void *p1 = &b;
    void *p2 = &d;

    cout<<p<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;

    return 0;
}