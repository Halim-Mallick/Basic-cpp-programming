// Display Multiplication Table up to 10
#include<iostream>
using namespace std;

int main(){

    int num,i;

    cout<<"Enter A number: \n";
    cin>> num;

    for(i=1; i<=10; i++){
        cout<<num <<"*" <<i <<"=" <<num*i <<"\n";
    }
    return 0;
}
