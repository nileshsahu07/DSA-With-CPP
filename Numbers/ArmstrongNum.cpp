#include <iostream>
using namespace std;

// Armstrong number me jitne number honge un sab number ke utni hi qube means 3 lagaker unka sum nikalne per jo value di thi vhi value aaye use armstrong nuber kahte hai
// jese => 153 ab in tine ke qube laga denge 1*1*1 + 5*5*5 + 3*3*3 = 153 
int main(){

    int n;
    cout<<"Enter a value:- ";
    cin>>n;

    int temp = n;
    int sum = 0;
    int rem = 0;

    while(temp!=0){
        rem = temp%10;
        sum = sum+(rem*rem*rem);
        temp = temp/10 ;
    }

    // cout<<"rem : "<<rem<<endl;
    // cout<<"sum : "<<sum<<endl;
    // cout<<"n : "<<n<<endl;
    // cout<<"temp : "<<temp<<endl; //for understanding

    if(n==sum){
        cout<<n<<" is a Armstrong number";
    }
    else{
        cout<<n<<" is not a Armstrong number";
    }

    return 0;
}