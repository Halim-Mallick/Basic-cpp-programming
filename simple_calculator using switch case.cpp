// Program to build a simple calculator using switch Statement
#include<iostream>
using namespace std;

int main(){
    double a,b;
    char op;

    cout<<"Enter first number: ";
    cin>> a;
    cout<<"Enter An oprator(+,-,/,*): ";
    cin>> op;
    cout<<"Enter second number: ";
    cin>> b;

    switch(op){
        case '+':{
            int add=a+b;
            cout<<"Addition is: "<<add;
            break;
        }
        case '-':{
            int sub=a-b;
            cout<<"Substract is: "<<sub;
            break;
        }case '*':{
            int mul=a*b;
            cout<<"multiplication is: "<<mul;
            break;
        }
        case '/':{
            if(b!=0){
                double div=a/b;
                cout<<"Division is: "<<div;
            }
            else{
                cout<<"Dhur pagol!";
            }
            break;
        }

        default:{
            cout<<"Operator is invalid: ";
        }
    }
    return 0;
}
