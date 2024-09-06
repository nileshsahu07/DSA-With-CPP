#include <iostream>
using namespace std;

int main(){
    //left triangle=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // left opposite triangle=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int j=1;j<=5-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // right triangle=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int k=1;k<=5-i+1;k++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // right opposite triangle=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int k=1;k<=i;k++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=5-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //Piramid=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int k=1;k<=5-i+1;k++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i*2-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // opposite piramid=>
    // int i;
    // for(i=5;i>=1;i--){
    //     for(int k=1;k<=5-i;k++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i*2-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //holo square=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         if(i==1||i==5||j==1||j==5){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // holo triangle=>
    // int i;
    // for(i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i==5||j==1||i==j){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Print A=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||i==n/2+1||j==1||j==n){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Print F=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||i==n/2+1||j==1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Print P=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||i==n/2+1||j==1|| i==2 && j==n){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Print B=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||i==n/2+1||j==1||j==n || i==5){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Print plus=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==n/2+1||j==n/2+1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Print four square=>
    // int i;
    // int n = 5;
    // for(i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==n/2+1||j==n/2+1 ||i==1||i==5||j==1||j==5 ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Print o =>

    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Border condition for 'O' except corners
            if ((i == 0 && j != 0 && j != n - 1) || 
                (i == n - 1 && j != 0 && j != n - 1) || 
                (j == 0 && i != 0 && i != n - 1) || 
                (j == n - 1 && i != 0 && i != n - 1)) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}






