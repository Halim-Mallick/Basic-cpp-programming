#include <iostream>
using namespace std;

class Avg{
    public:
    static float printAvg(float a, float b, float c){
        return (a+b+c)/3;
    }
};
int main(){
   float a;
   float b;
   float c;
   
   cout << "Enter Three Number:\n";
   cin>>a;
   cin>>b;
   cin>>c;
   float outp=Avg::printAvg(a,b,c);
   
   cout <<"Average number is "<<outp;
   
   return 0; 
}
