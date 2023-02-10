// Function with Parameters
#include<iostream>
using namespace std;

void DisplayNum(int n, float n2){
    cout<<"This is integer: "<<n <<endl;
    cout<<"This is float: "<<n2;
}
int main(){
    int num1=10;
    float num2=2.20;

    DisplayNum(num1,num2);

    return 0;
}
