/*
 ----------------------- Day 4 ----------------------
 -----  Binary Cofficient (bCr)Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;
using ll = long long int;

ll factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(void){

    int n,r; 
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Number : ";
    cin>>r;
    
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<n<<"C"<<r<<" is : "<<ncr<<endl;

    return 0;
}

/**
 * Sample Output
 * 
*/