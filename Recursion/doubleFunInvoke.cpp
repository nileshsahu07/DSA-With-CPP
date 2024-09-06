#include <iostream>
using namespace std;

int fun(int n){
    if(n<=1){
        return 0;
    }

    return fun(n/2)+fun(n/4);
}

int main(){

    cout<<fun(5);

    return 0;
}