#include <iostream>
using namespace std;

int main(){

    /*int arr[5] = {1,2,3,4,5};

    cout<<arr[0];*/

    // 2nd way to initialize an =>
    /*int arr[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // arr[3] = 40; ye dono kese work kar rhe hai jabki upar size to 3 hi di hai doubt
    // arr[4] = 50;

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;

    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    // if we dont give an index
    /*int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[4] = 40;

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/


    //direct storee in dynamic memory=>

    /*int *arr = new int(10);
    int *arr1 = new int[10];

    cout<<*arr<<endl;
    cout<<*arr1<<endl;*/


    // ab is array me values dalne ke liye=>
    int *arr = new int[10];

    cout<<"Enter Elements in Array:- ";
    for(int i = 0 ; i<10; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Array is:- ";
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    cout<<"Address of 0 index:- "<<arr<<endl;
    cout<<"Value of 0 index:- "<<*arr<<endl;
    cout<<"Address of 0 index:- "<<&arr[0]<<endl;
    cout<<"Address of 1 index:- "<<arr+1<<endl;




    return 0;
}