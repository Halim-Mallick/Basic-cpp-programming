// program to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration
#include<iostream>
using namespace std;

int main(){

    int num=0;
    int sum=0;

    while(num>=0){
        sum=sum+num;
        cout<<"Enter a number: ";
        cin>> num;

        if(num>50){
            cout<<"This number grater than 50";
            num=0;
            continue;
        }
    }

    cout<<"Summation is: "<<sum;

    return 0;
}
