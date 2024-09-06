int i = 1;
while(i<=7){
    int j=1;
    while(j<=7){
        if(i==4||j==4||i==j||j==7-i+1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
        j++;
    }
    cout<<endl;
    i++;
}