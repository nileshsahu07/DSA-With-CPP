#include <iostream>
using namespace std;

int count(int n){
    int count = 0;

    while(n!=0){
        count++;
        n = n/10;
    }
    return count;
}

int pow(int rem , int countDigit){
    int pow = 1;
    while(countDigit!=0){
        pow = pow * rem;
        countDigit--;
    }
    return pow;
}
 
bool isArmstrong(int n){

    int temp = n;
    int sum = 0;
    int rem = 0;

    int countDigit = count(n);
 
    while(temp!=0){
        rem = temp%10;
        sum = sum + pow(rem, countDigit);
        temp = temp/10;
    }

    if(sum == n){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n;
    cout<<"Enter Number:- ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<"Yes "<<n<<" is a Prime Number";
    }else{
        cout<<"No "<<n<<" is not a Prime Number";
    }

    return 0;
}