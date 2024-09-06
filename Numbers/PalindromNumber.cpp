#include <iostream>
using namespace std;

int main(){
    //Palindrome number=> 24842  ise hum ulta likhenge to bhi yhi number aayenge unhe palindrome number kahta hai.

    //for better understanding=>
    int OneModuleTen = 1%10;
    cout<<"OneModuleTen:- "<<OneModuleTen<<endl;

    int OneDivideByTen = 1/10;
    cout<<"OneDivideByTen:- "<<OneDivideByTen<<endl;

    //start palindrome=>
    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    int temp = n;
    int rem = 0;
    int sum = 0;

    while(temp!=0){
        rem= temp%10;
        sum = sum*10+rem;
        temp = temp/10;
    }


    // cout<<"rem : "<<rem<<endl;
    // cout<<"sum : "<<sum<<endl;
    // cout<<"n : "<<n<<endl;
    // cout<<"temp : "<<temp<<endl; //for understanding

    if(n==sum){
        cout<<n<<" is a Palindrome Number";
    }
    else{
        cout<<n<<" is not a Palindrome Number";   
    }
}