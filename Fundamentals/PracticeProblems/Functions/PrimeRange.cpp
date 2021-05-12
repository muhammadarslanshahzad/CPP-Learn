/*
 ----------------------- Day 4 ----------------------
 -----  Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    int flag=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
   return flag;
}

int main(void){
    
    int a, b;
    cout<<"Enter first Number : ";
    cin>>a;
    cout<<"Enter second Number : ";
    cin>>b;
    
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;


    return 0;
}

/**
 * Sample Output
 *  
 * 
 *  Enter first Number : 1
 *  Enter second Number : 10
 *  1 2 3 5 7 
 * 
 * 
 *  Enter first Number : 12
 *  Enter second Number : 17
 *  13 17 
 * 
 * 
*/