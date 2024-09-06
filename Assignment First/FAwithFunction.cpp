#include <iostream>
using namespace std;

/*void OnetoFour(int a, int b){
    cout<<"Sum is :- "<<a+b<<endl;
    cout<<"Sub is :- "<<a-b<<endl;
    cout<<"Mul is :- "<<a*b<<endl;
    cout<<"Div is :- "<<a/b<<endl;
}*/

/*void Seven(int a, int b){
    if(a>b){
        cout<<"A is greater than B";
    }else{
        cout<<"B is greater than A";
    }
}*/

/*void Eight(int a, int b, int c){
    if(a>b && a>c){
        cout<<"A is Greater";
    }
    else if(b>a && b>c){
        cout<<"B is Greater";
    }
    else if(c>a && c>b){
        cout<<"C is Greater";
    }
}*/


/*void Nine(int year){
    if((year % 400 == 0)||(year % 100  != 0 &&  year % 4 == 0)) {
        cout<<"It is a Leap year";
    }
    else{
        cout<<"It is not a Leap year";
    }
}*/


/*void ten(int num){
    if(num==1){
        cout<<"January";
    }
    else if(num==2){
        cout<<"february";
    }
    else if(num==3){
        cout<<"March";
    }
    else if(num==4){
        cout<<"April";
    }
    else if(num==5){
        cout<<"May";
    }
    else if(num==6){
        cout<<"June";
    }
    else if(num==7){
        cout<<"July";
    }
    else if(num==8){
        cout<<"August";
    }
    else if(num==9){
        cout<<"September";
    }
    else if(num==10){
        cout<<"October";
    }
    else if(num==11){
        cout<<"November";
    }
    else if(num==12){
        cout<<"December";
    }
    else{
        cout<<"Invalid...";
    }

}*/


/*void Twelve(int length,int width){
    if(length==width){
        cout<<"It is an Square";
    }
    else{
        cout<<"It is not an Square";
    }
}*/


/*void Fourteen(int a){
    if(a%2==0){
    cout<<"It is an Even Number";
   }
   else{
    cout<<"It is an Odd Number";
   }
}*/


void Fifteen(int a){
    if(a<0){
    cout<<"The Number is Negative";
   }
   else{
    cout<<"The Number is Positive";
   }
}

int main(){

    // OnetoFour(20,10);

    /*int a;
    int b;
    cout<<"Enter the value of A:- ";
    cin>>a;

    cout<<"Enter the value of B:- ";
    cin>>b;

    Seven(a,b);*/

    /*int a;
    int b;
    int c;
    cout<<"Enter the value of A:- ";
    cin>>a;
    cout<<"Enter the value of B:- ";
    cin>>b;
    cout<<"Enter the value of C:- ";
    cin>>c;

    Eight(a,b,c);*/


    /*int year;
    cout<<"Enter Year:- ";
    cin>>year;

    Nine(year);*/


    /*int num;
    cout<<"Enter Month Number:- ";
    cin>>num;

    ten(num);*/

    /*int length;
    cout<<"Enter the length:- ";
    cin>>length;

    int width;
    cout<<"Enter the Width:- ";
    cin>>width;

    Twelve(length,width);*/

    /*int a;
   cout<<"Enter Number:- ";
   cin>>a;

   Fourteen(a);*/


   int a;
   cout<<"Enter Number:- ";
   cin>>a;

   Fifteen(a);

    return 0;
}