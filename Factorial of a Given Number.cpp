// Find the Factorial of a Given Number
#include<iostream>
using namespace std;

int main(){

    int num,i;
    long factorial=1.0;

    cout<<"Enter A number: \n";
    cin>> num;

    if(num<0){
        cout<<"Error! Factorial of a negative number doesn't exist";
    }
    else{
        for(i=1; i<=num; i++){
            factorial*=i;
        }
        cout<<"factorial of "<< num <<"!="<<factorial;
    }
    return 0;
}
