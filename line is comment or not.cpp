#include <iostream>
#include <string>
using namespace std;

bool isComment(const string &line){
    if(line.find("//")==0 || line.find("/*")==0 && line.rfind("*/")==line.length()-2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string input;
    cout<< "Enter Commment: ";
    getline(cin,input);
    
    if(isComment(input)==true){
       cout<< "This is comment"; 
    }
    else{
        cout<< "This is not comment";
    }
  return 0;
}
