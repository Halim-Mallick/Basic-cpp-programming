#include <iostream>
using namespace std;

int main() {
    int a[100],i,n;
    
    cout<<"Enter Array size: ";
    cin>>n;
    
    for(i=0; i<n; i++){
        cout<<"Enter Array Elements "<<i <<" index:";
        cin>>a[i];
    }
    
    int max=a[0];
    
    for(i=1; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"Maximum Element is: "<<max;

    return 0;
}
