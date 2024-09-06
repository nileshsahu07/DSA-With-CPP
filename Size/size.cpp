#include <iostream>
using namespace std;

int main(){

    cout<<"Size of Int :- "<<sizeof(int)<<endl;
    cout<<"Size of Float :- "<<sizeof(float)<<endl;
    cout<<"Size of Char :- "<<sizeof(char)<<endl;
    cout<<"Size of double :- "<<sizeof(double)<<endl;
    cout<<"Size of string :- "<<sizeof(string)<<endl;
    cout<<"Size of short int :- "<<sizeof(short int)<<endl;
    cout<<"Size of long int :- "<<sizeof(long long int)<<endl;

    signed int a = -1;
    unsigned int b = -1;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}