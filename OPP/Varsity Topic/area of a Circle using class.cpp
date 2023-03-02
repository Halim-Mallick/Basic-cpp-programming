#include <iostream>
using namespace std;

class Area{
    public:
    static float radious(float num){
        return (3.14*num*num);
    }
};
 int main() {
     float radious;
   cout << "Enter the radius of circle: ";
   cin >> radious;
   
   float reg=Area::radious(radious);
    cout<<reg;
   return 0;
}
