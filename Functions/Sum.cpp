#include <iostream>
using namespace std;

/*void sum(int x,int y){
    int c = x+y;
    cout<<c<<endl;
    //return c;  //Void function kabhi bhi value return nhi karta void ki jagh hum int likhenge to yeh kar dega
}

int main(){

    int a;
    cout<<"Enter the value of a :- ";
    cin>>a;

    int b;
    cout<<"Enter the value of b:- ";
    cin>>b;

    sum(a,b);

    return 0;
}*/


int sum(int x,int y){
    int c = x+y;
    // cout<<c<<endl;
    return c;  //Void function kabhi bhi value return nhi karta void ki jagh hum int likhenge to yeh kar dega
};

void fun(){
    cout<<sum(100,200)<<endl;
}

int main(){

    int a;
    cout<<"Enter the value of a :- ";
    cin>>a;

    int b;
    cout<<"Enter the value of b:- ";
    cin>>b;


    cout<<sum(a,b)<<endl;

    cout<<endl;
    fun();

    return 0;
}