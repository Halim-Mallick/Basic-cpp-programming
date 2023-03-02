#include <iostream>
using namespace std;

class Employe{
    public:
    int id;
    string name;
    float salary;
    void insert(int i,string n,float s){
        id=i;
        name=n;
        salary=s;
    }
    
    void display(){
        cout <<id <<" "<<name <<" "<<salary<<'\n';
    }
};

int main() {
    Employe e1;
    Employe e2;

    e1.insert(47,"Halim",18000);
    e2.insert(52,"Foni",15000);
    e1.display();
    e2.display();
    return 0;
}
