//Conversion From int to double
//Working of Implicit type-conversion
#include<iostream>
using namespace std;

int main(){

    //assinging value
    int num_int=20;
    //declaring double variable
    double num_double;

    // implicit conversion
    // assigning int value to a double variable
    num_double=num_int;

    cout<<"integer number is:"<<num_int <<endl;
    cout<<"Double number is:"<<num_double <<endl;

    return 0;
}
