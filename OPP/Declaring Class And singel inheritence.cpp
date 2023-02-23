//Coded by Halim Mallick
#include <iostream>
using namespace std;

class Diu {
   public:
    void DIU() {
        cout << "Welcome To DIU Family!!" << endl;
        cout<< "Number of Department= 5"<< endl<<"\n";
    }
};

class GED {
   public:
    void ged() {
        cout << "Welcome To GED Department!!" << endl;
    }
};

class Civil {
   public:
    void civil() {
        cout << "Welcome To CIVIL Department!!" << endl;
    }
};

class cse {
   public:
    void Cse() {
        cout << "Welcome To CSE Department!!" << endl;
    }
};

class EEE {
   public:
    void eee() {
        cout << "Welcome To EEE Department!!" << endl;
    }
};

class ENG {
   public:
    void eng() {
        cout << "Welcome To ENG Department!!" << endl;
    }
};

class varsity: public Diu{
};
class Department1 : public GED{
};
class Department2 : public Civil{
};
class Department3 : public cse{
};
class Department4 : public EEE{
};
class Department5 : public ENG{
};

int main() {
    varsity name;
    Department1 n1;
    Department2 n2;
    Department3 n3;
    Department4 n4;
    Department5 n5;
    name.DIU();
    n1.ged();
    n2.civil();
    n3.Cse();
    n4.eee();
    n5.eng();
    return 0;
}
