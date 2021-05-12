/*
 ----------------------- Day 4 ----------------------
 -----  Functions   -----------------------------------
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
    
    int npr = factorial(n)/(factorial(n-r));
    cout<<"("<<n<<"P"<<r<<") is : "<<npr<<endl;
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter Number : 5
 *  Enter Number : 3
 *  (5P3) is : 60
 * 
*/