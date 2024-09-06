#include <iostream>
using namespace std;

int main(){

    char ch = 'A';
    char *c = &ch;

    cout<<c<<endl<<endl;
    cout<<*c<<endl;

    cout<<(void*)c<<endl;
    

    return 0;
}