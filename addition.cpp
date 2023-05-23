#include<iostream>
using namespace std;
int add (int x, int y, int z, int m){
    return x+y+z+m;
}

int main() {
    int count=0;
    while(count<5){
        int a,b,c,d;
        cout<<"Enter Number 1: ";
        cin>>a;
        cout<<"Enter Number 2: ";
        cin>>b;
        cout<<"Enter Number 3: ";
        cin>>c;
        cout<<"Enter Number 4: ";
        cin>>d;
    
        int result=add(a,b,c,d);
        cout<<"Total Addition is:"<<result;
       
        cout<<endl<<endl;
         count++;
   }
    return 0;
}
