#include <iostream>
using namespace std;

int main(){

    /*int *p = new int(10);
    float *p1 = new float(10.5);

    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<p1<<endl;
    cout<<*p1<<endl;*/

    //with void 
    void *p = new int(10);

    cout<<p<<endl;
    // cout<<*p<<endl;  yeh error deta hai 
    //matlab void se hum address to dekh sakte hai lakin value nhi dekh sakte

    return 0;
}