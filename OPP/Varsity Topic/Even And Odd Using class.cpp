#include <iostream>
using namespace std;

class OddOrEven{
    private:
    int number;
    
    public:
    void oddorEven(int n){
        number=n;
        if(n%2==0){
            
            cout<<number <<" is Even Number";
        }
        else{
            cout <<number <<" is Odd number";
        }
    }
};

int main(){
    OddOrEven n1;
    int number;
    cout<< "Enter A Number: ";
    cin>>number;
    n1.oddorEven(number);
    return 0;
}
