//Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter An enteger: \n";
    cin>> num;

    if(num>0){
        cout<<num <<" is an positive number";
    }
    else if(num<0){
        cout<<num <<" is an Negative number"<<endl;
    }
    else{
        cout<<"You Enterd 0";
    }
    return 0;
}
