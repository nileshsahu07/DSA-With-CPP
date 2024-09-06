#include <iostream>
using namespace std;

int main(){
    int a = 10;

    //pre increment=>
    /*cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;*/

    //post increment=>
    /*cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;*/

    /*a = a++;
    cout<<a<<endl;
    a = a++;
    cout<<a<<endl;
    a = a++;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;*/

    a = ++a;
    cout<<a<<endl;
    a = ++a;
    cout<<a<<endl;
    a = ++a;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;

    int b = 10;

    // pre decrement =>
    /*cout<<b<<endl;
    cout<<--b<<endl;
    cout<<b<<endl;*/

    // post decrement=>
    /*cout<<b<<endl;
    cout<<--b<<endl;
    cout<<b<<endl;*/

    return 0;
}
