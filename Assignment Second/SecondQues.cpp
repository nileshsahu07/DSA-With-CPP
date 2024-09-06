#include <iostream>
using namespace std;
//last prime number that occurs before the entered number. 

int main(){

    int num;
    cout<<"Enter a number 1 :- ";
    cin>>num;

    int num2;
    cout<<"Enter a number 2 :- ";
    cin>>num2;

    


    for(int i=1; i<=num; i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
    for(int j=1; j<=num2; j++){
        if(num2 % j == 0){
            cout<<j<<" ";
        }
    }

   



    
    return 0;
}