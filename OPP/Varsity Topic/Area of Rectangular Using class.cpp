#include <iostream>
using namespace std;

class Area{
    public:
    static float RecT(float n1, float n2){
        return (n1*n2);
    }
};
 int main() {
     float Length,breadth;
   cout << "Enter the length of rectangular: ";
   cin >> Length;
   cout << "Enter the bredth of rectangular: ";
   cin >> breadth;
   
   float result=Area::RecT(Length,breadth);
   cout<<"Area is "<<result;
   return 0;
}
