/*
 ----------------------- Day 4 ----------------------
 ----- Arm Strong Number Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int isArmStrong(int n){
    int temp =n;
    int sum=0,last; 
    while(temp>0){
        last= temp%10;
        int count=last*last*last;
        sum += count;
        temp = temp/10;
    }
    return sum;
}

int main(void){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int s= isArmStrong(n);
    if(s==n){
        cout<<"Armstrong number "<<endl;
    }
    else{
        cout<<"Not a Armstrong"<<endl;
    }
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter Number : 153
 *  Armstrong number 
 * 
*/