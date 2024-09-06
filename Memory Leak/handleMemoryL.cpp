#include <iostream>
using namespace std;

int *p = new int;

void fun(){
    *p = 10;

    cout<<"Memory:- "<<p<<endl;
    cout<<"Value:- "<<*p<<endl;
}

int main(){

    fun();

    cout<<"Memory:- "<<p<<endl;
    cout<<"Value:- "<<*p<<endl;

    delete p;

    cout<<"Memory:- "<<p<<endl;
    cout<<"Value:- "<<*p<<endl;

    p = nullptr;

    cout<<"Memory:- "<<p<<endl;
    cout<<"Value:- "<<*p<<endl;

    return 0;

}



// int *p = new int;

// void fun(){
//     int *p = new int(20);

//     cout<<"Memory:- "<<p<<endl;
//     cout<<"Value:- "<<*p<<endl;
// }

// int main(){

//     fun();

//     cout<<"Memory:- "<<p<<endl;
//     cout<<"Value:- "<<*p<<endl;

//     return 0;

// }