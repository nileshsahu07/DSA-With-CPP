#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    bool flag = true;

    if(n<2){
        // cout<<n<<" is not a Prime number";
        flag = false;
    }
    else{
        int i;
        for(i=2; i<n; i++){
            if(n%i == 0){
                // cout<<n<<" is a Prime number"<<endl;   
                flag = false;  
            }
        }
    }
    if(flag==true){
        cout<<n<<" is a Prime Number"<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number";  
    }
    

    return 0;
}