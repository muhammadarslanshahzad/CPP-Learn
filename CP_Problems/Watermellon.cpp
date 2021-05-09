#include <iostream>
using namespace std;

int main (void){
    int weight;
    cin>>weight;
    if(weight%2==0 && weight>2 && weight<101){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}