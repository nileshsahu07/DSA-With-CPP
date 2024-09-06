#include <iostream>
using namespace std;

int main(){

    //Print 1 to 10 =>
    // int a = 1;
    // while(a<=10){
    //     cout<<a<<" ";
    //     a++;
    // }


    //Print table of 2 =>
    // int i = 1 ;
    // while(i<=20){
    //     if(i%2==0){
    //         cout<<i<<endl;  
    //     }
    //     i++;
    // }


    //Sum of 1 to 15 numbers =>
    /*int i = 1;
    int sum = 0;
    while(i<=15){
        sum=sum+i; 
        //sum +=i ise hum ese bhi likh sakte hai
        i++;
    }
     cout<<sum<<endl;*/

    //agar hum cout ko while loop ke andar print kare to => yeh isliye hua kyuki yeh har bar value increse karke pluse karke print karta ja rha hai
    /*int i = 1;
    int sum = 0;
    while(i<=15){
        sum +=i;
        i++;
     cout<<sum<<endl;
    }*/



    //Print 5 star in diffrent diffrent line =>
    //     int i = 1;
    //    while(i<=5){
    //         cout<<"*"<<endl;
    //         i++;
    //    } 

    //Print 5 start in 1 line=> *****
    // int i = 1;
    // while(i<=5){
    //     cout<<"*";
    //     i++;
    // }

    //Print 5-5 start row wise and colomn wise also means it is sqauar=>
    // int i = 1;
    // while(i<=5){
    //     int j=1;
    //     while(j<=5){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //left triangle =>
    /*int i = 1;

    while(i<=5){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }*/


   //left ulta triangle =>
   /*int i = 1;

   while(i<=5){
    int j = 1;
    while(j<=6-i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
   }*/



  //another way of left ulta triangle =>
    /*int i = 1;

    while(i<=5){
        int j=1;
        while(j<=5-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }*/



//    sidha right triangle =>
//    int i = 1;

//    while(i<=5){
//      int k = 1;
//     while(k<=5-i){
//         cout<<"  ";
//         k++;
//     }
//       int j = 1;
//     while(j<=i){
//         cout<<"* ";
//         j++;
//     }
//         cout<<endl;
//         i++;
//    }


    // ulta right triangle =>
    // int i = 1;
    // while(i<=5){
    //     int k=1;
    //     while(k<=i){
    //         cout<<"  ";
    //         k++;
    //     }
    //     int j = 5;
    //     while(j>=i){
    //         cout<<"* ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // ulta right triangle sir's way=>
    // int i = 5;
    // while(i>=1){
    //     int k=1;
    //     while(k<=5-i){
    //         cout<<"  ";
    //         k++;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }



    // sidha piramid my way=>
    // int i = 1;
    // while(i<=5){
    //     int k = 1;
    //     while(k<=5-i){
    //         cout<<"  ";
    //         k++;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"* ";
    //         j++;
    //     }
    //     int l = 2;
    //     while(l<=i){
    //         cout<<"* ";
    //         l++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


//ulta piramid my way=>
//    int i = 1;

//    while(i<=5){
//     int k=2;
//     while(k<=i){
//         cout<<"  ";
//         k++;
//     }
//     int j = 5;
//     while(j>=i){
//         cout<<"* ";
//         j--;
//     }
//     int l = 1;
//     while(l<=5-i){
//         cout<<"* ";
//         l++;
//     }
//     cout<<endl;
//     i++;
//    }


//sidha piramid sir's way=>
// int i = 1;
// while(i<=5){
//     int k=1;
//     while(k<=5-i){
//         cout<<"  ";
//         k++;
//     }
//     int j=1;
//     while(j<=2*i-1){
//         cout<<"* ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//ulta piramid sir's way=>

// int i = 5;
// while(i>=1){
//     int k=1;
//     while(k<=5-i){
//         cout<<"  ";
//         k++;
//     }
//     int j=1;
//     while(j<=i*2-1){
//         cout<<"* ";
//         j++;
//     }
//     cout<<endl;
//     i--;
// }


//Print holo square=>
// int i = 1;

// while(i<=5){
//     int j = 1;
//     while(j<=5){
//         if(i==1||i==5||j==1||j==5){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//Print holo left triangle=>
// int i = 1;

// while(i<=5){
//     int j = 1;
//     while(j<=i){
//         if(j==1||i==5||i==j){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print A=>
// int i = 1;

// while(i<=5){
//     int j = 1;
//     while(j<=5){
//         if(i==1||i==3||j==1||j==5){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print F=>
// int i = 1;
// int n = 5;

// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         if(i==1||i==3||j==1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print P=>
// int i = 1;
// int n = 6;

// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         if(i==1||i==3||j==1||i==2 && j==n){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print B=>
// int i = 1;
// int n = 5;

// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         if(i==1||i==3||i==5||j==1||j==5){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// Print plus=>
// int i = 1;
// while(i<=5){
//     int j=1;
//     while(j<=5){
//         if(i==3||j==3){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// Print four squar=>
// int i = 1;
// while(i<=5){
//     int j=1;
//     while(j<=5){
//         if(i==3||i==1||i==5||j==1||j==3||j==5){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print plus with extra lines=>
// int i = 1;
// while(i<=7){
//     int j=1;
//     while(j<=7){
//         if(i==4||j==4||i==j||j==7-i+1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Butterfly=>
// int n;
// cout<<"Enter a number:- ";
// cin>>n;

// cout<<endl<<endl;

// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout<<"* ";
//         j++;
//     }
//     int k = 1;
//     while(k<=(n-i)*2){
//         cout<<"  ";
//         k++;
//     }
//     int a = 1;
//     while(a<=i){
//         cout<<"* ";
//         a++;
//     }
//     cout<<endl;
//     i++;
// }
//  i = n;
// while(i>=1){
//     int j = 1;
//     while(j<=i){
//         cout<<"* ";
//         j++;
//     }
//     int k = 1;
//     while(k<=(n-i)*2){
//         cout<<"  ";
//         k++;
//     }
//     int a = 1;
//     while(a<=i){
//         cout<<"* ";
//         a++;
//     }
//     cout<<endl;
//     i--;
// }

// cout<<endl<<endl;


//Right symbol => but we have to give 6 and 8
// int m;
// cout<<"Enter a value:- ";
// cin>>m;

// int n;
// cout<<"Enter a value:- ";
// cin>>n;

// int i = 1;
// while(i<=m){
//     int j = 1;
//     while(j<=n){
//         if(j==i-3||j==n-i+1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print O=>
// int i = 1;
// while(i<=5){
//     int j = 1;
//     while(j<=5){
//         if(i!=j && j!=5-i+1 ){
//             cout<<"* ";
//         }
//         else {
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//Print O =>
// int n;
// cout<<"Enter a Number:- ";
// cin>>n;

// int i =1;

// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         if((i==1 && j>1 && j<n) || (j==1 && i>1 && i<n) || (i==n && j>1 && j<n) || (j==n && i>1 && i<n )){
//             cout<<"* ";
//         }else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//Print Q =>
int n;
cout<<"Enter a Number:- ";
cin>>n;

int i =1;

while(i<=n){
    int j = 1;
    while(j<=n){
        if((i==1 && j>1 && j<n-1) || (j==1 && i>1 && i<n-1) || (i==n-1 && j>1 && j<n-1) || (j==n-1 && i>1 && i<n-1 ) || (i==j && i>n/2 && i<=n)){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
        j++;
    }
    cout<<endl;
    i++;
}



  




    return 0;
}