#include <iostream>
using namespace std;

int main(){


    int a = 10;
    int b = 20;

    //sahi answer=>
    // string msg = a<b?"a is less than b":"b is less than a";

    //galat answer matlab ternary ki kami
    string msg = a<b?"a is greater than b":"b is greater than a";

    //ab isne a is greater than hi print kiya jabki hai nhi fir bhi 


    cout<<msg<<endl;

    return 0;
}