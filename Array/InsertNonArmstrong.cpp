#include <iostream>
using namespace std;

int count(int num){
    int count = 0;
    while(num!=0){
        count++;
        num = num/10;
    }
    return count;
}

int pow(int rem,int countDigit){
    int pow = 1;
    while(countDigit!=0){
        pow = pow*rem;
        countDigit--;
    }
    return pow;
}

int checkNonArmstrong(int num){
    int temp = num;
    int sum = 0;
    int rem = 0;

    int countDigit = count(num);

    while(temp!=0){
        rem = temp%10;
        sum = sum +pow(rem,countDigit);
        temp = temp/10;
    }

    if(sum == num){
        return true;
    }else{
        return false;
    }
}

void isNonArmstrong(int start, int end, int *nonArmstrongArr, int &size){
    for(int i=start ; i<=end; i++){
        if(!checkNonArmstrong(i)){
            nonArmstrongArr[size] = i;
            size++;
        }
    }
    
    cout<<"Non Armstrong number between "<<start<<" to "<<end<<" :- ";
    for(int i=0; i<size; i++){
        cout<<nonArmstrongArr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int start;
   cout<<"Enter the starting value:- ";
   cin>>start;

   int end;
   cout<<"Enter the ending value:- ";
   cin>>end;

    int size = 0;
    int *nonArmstrongArr = new int [size];

    isNonArmstrong(start,end,nonArmstrongArr,size);

    return 0;
}