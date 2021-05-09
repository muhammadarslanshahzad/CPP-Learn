#include <iostream>
using namespace std;

int main(void){
    long T;
    cin>>T;
    while(T--){
       long n;
       cin>>n;
       if(n==2 || n%4==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
}