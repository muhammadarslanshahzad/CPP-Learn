/*
 ----------------------- Day 4 ----------------------
 -----  Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int sum (int a, int b){
    int s =a+b;
    return s;
}

int main(void){
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Sum is : "<<sum(a,b)<<endl;;
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter first number : 132
    Enter second number : 13231
    Sum is : 13363

 * Enter first number : 123
    Enter second number : 132
    Sum is : 255
*/
