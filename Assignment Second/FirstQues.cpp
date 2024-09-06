#include <iostream>
using namespace std;
//last prime number that occurs before the entered number. 

int main(){

    int num;
    cout<<"Enter a number :- ";
    cin>>num;

    int flag = true;

    if(num == 0 || num == 1){
        flag = false;
    }else{\
        for(int i=2; i<num; i++){
           if(num%i==0){
            for(int j=num; j<=2; j--){
                if(j%i == 0){
                    cout<<j<<" ";
                }
            }
           }
        }   
    }

    if(flag==true){
        cout<<"yes it is prime";
    }else{
        cout<<"no it is not prime";
    }

    return 0;
}