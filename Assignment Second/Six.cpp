#include <iostream>
using namespace std;

int main(){

    int start = 100;
    int end = 200;

    int sum = 0;
    for(int i=start; i<=end; i++){
        if(i%9 == 0){
           sum = sum +i;
        }
    }
    cout<<"Sum of all integers between 100 to 200 which are divisible by 9 is :- "<<sum<<endl;

    return 0;
}