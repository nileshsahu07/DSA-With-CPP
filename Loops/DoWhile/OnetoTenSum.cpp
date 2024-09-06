#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;

    do{
        sum=sum+i;
        cout<<sum<<" ";
        i++;
    }
    while(i<=15);
}