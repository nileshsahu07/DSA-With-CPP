#include <iostream>
using namespace std;

int main(){

    /*int a = 0&&0;
    cout<<a<<endl;

    a = 0&&1;
    cout<<a<<endl;

    a = 1&&0;
    cout<<a<<endl;

    a = 1&&1;
    cout<<a<<endl;

    cout<<!a<<endl;



    int b = 0||0;
    cout<<b<<endl;

    b = 0||1;
    cout<<b<<endl;

    b = 1||0;
    cout<<b<<endl;

    b = 1||1;
    cout<<b<<endl;

    cout<<!b<<endl;*/



     // logical operator precedence questions=>

     /*int a = 1;
     int b = 0;

     int c = !a&&a||b;
     int d = !(a&&a||b);

     cout<<c<<endl;
     cout<<d<<endl;*/

     /*int a = 0 ;
     int b = 1;

     int c = !(a||b&&b);

     cout<<c<<endl;*/

     /*int a = 1 ;
     int b = 0;

     int c = !b&&a||a;

     cout<<c<<endl;*/


     /*int a = 1 ;
     int b = 1;

     int c = b&&!(a&&b);

     cout<<c<<endl;*/


     int a = 0 ;
     int b = 0;

     int c = b&&a&&(!b);
     int d = !a&&!b||!a;

     cout<<c<<endl;
     cout<<d<<endl;


    return 0;
}