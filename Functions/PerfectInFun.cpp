#include <iostream>
using namespace std;

void PerfectNum(int n){
    int sum = 0;

    for(int i=1; i<=n/2; i++){
        if(n%i == 0){
            sum = sum+i;
        }
    }

    if(sum == n){
        cout<<"Yes "<<n<<" is a Prime number";
    }else{
        cout<<"No "<<n<<" is not a Prime number";
    }
}

int main(){

    int n;
    cout<<"Enter Number:- ";
    cin>>n;

    PerfectNum(n);

    return 0;
}