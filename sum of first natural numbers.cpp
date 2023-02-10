// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers
#include<iostream>
using namespace std;

int main(){

    int num,i,sum=0;

    cout<<"Enter A number: \n";
    cin>> num;

    for(i=1; i<=num; i++){
       sum=sum+i;
    }
    cout<<"Summation is: "<<sum;
    return 0;
}
