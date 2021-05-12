/*
 ----------------------- Day 4 ----------------------
 -----  Binary  to decimal conversion   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

void btod(int n){
    int temp=n, dec=0,base=1,last;
    while (temp)
    {
        last=temp%10;
        temp=temp/10;
        dec += last*base;
        base *= 2;
    }
    cout<<"Number after conversion : "<<dec<<endl;
}

int main(void){
    int n;
    cout<<"Enter binary number here : ";
    cin>>n;
    btod(n);
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter binary number here : 101101
 *  Number after conversion : 45
 * 
*/