#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *f = &a;
    cout<<f<<endl;
   
   
    float b = 10.5;
    float *c = &b;
    cout<<c<<endl;

    // int *c = &b;


    char i = 'A';
    char *j = &i;
    cout<<(void*)j<<endl;
   

    return 0;
}