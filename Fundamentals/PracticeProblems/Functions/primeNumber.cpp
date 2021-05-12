/*
 ----------------------- Day 4 ----------------------
 -----  Function Prime Number or Not   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    int flag=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<n<<" is not a Prime Number"<<endl;
            flag=1;
            break;
        }
    }
   return flag;
}
int main(void){
    
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    bool f=isPrime(n);
    if(f==0){
        cout<<"Prime Number "<<endl;
    }else{
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter Number : 10
 *  10 is not a Prime Number
 *
 *  Enter Number : 5
 *  5 is a Prime Number
 *  
 *  Enter Number : 2
 *  2 is a Prime Number
*/