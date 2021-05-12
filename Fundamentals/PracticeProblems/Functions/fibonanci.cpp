/*
 ----------------------- Day 4 ----------------------
 -----  Fibonanci Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

void fibbonanci(int n){
    int t=0,t1=1,nt;
    for(int i=0;i<n;i++){
        cout<<t<<" ";
        nt=t+t1;
        t=t1;
        t1=nt;
    }
}
int main(void){
    int n ;
    cout<<"Enter range of number : ";
    cin>>n;
    fibbonanci(n);
    return 0;
}

/**
 * Sample Output
 *  Enter range of number : 10
 *  0 1 1 2 3 5 8 13 21 34 
 * 
*/