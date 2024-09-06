#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(n==sum){
        cout<<n<<" is a Perfect Number";
    }
    else{
        cout<<n<<" is not a Perfect Number";
    }

    return 0;
}