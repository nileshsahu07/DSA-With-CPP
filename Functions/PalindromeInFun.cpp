#include <iostream>
using namespace std;

void PalindromeNum(int n){
    int temp = n;
    int sum = 0;
    int rem = 0;

    while(temp!=0){
        // to take last value of your number one by one 
        rem = temp%10;
        // to store opposite of your number 
        sum = sum * 10 + rem;
        // to reduce last value from your number one by one
        temp = temp/10;
    }

    if(n == sum){
        cout<<"Yes "<<n<<" is a Palindrome Number";
    }else{
        cout<<"No "<<n<<" is not a Palindrome Number";
    }
}

int main(){

    int n;
    cout<<"Enter Number:- ";
    cin>>n;

    PalindromeNum(n);

    return 0;
}