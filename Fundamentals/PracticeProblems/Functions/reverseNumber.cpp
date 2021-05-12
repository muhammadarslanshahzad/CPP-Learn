/*
 ----------------------- Day 4 ----------------------
 ----- Reverse Number Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

void reverse(int n){
    int r=0;
    while(n>0){
        int last=n%10;
        r= r*10+last;
        n /= 10;
    }
    if(n<10){
        cout<<"Reverse Number is : "<<r<<"0";
    }else{
        cout<<"Reverse Number is : "<<r;
    }
}

int main(void){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    reverse(n);

    return 0;
}

/**
 * Sample Output
 *  Enter Number : 45
 *  Reverse Number is : 54
 *  
 *  Enter Number : 5
 *  Reverse Number is : 50
 * 
 *  Enter Number : 50
 *  Reverse Number is : 5
 * 
*/