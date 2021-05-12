/*
 ----------------------- Day 4 ----------------------
 -----  Type of Triangle   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cout<<"Enter First side of triangle : ";
    cin>>a;
    cout<<"Enter Second side of triangle : ";
    cin>>b;
    cout<<"Enter Third side of triangle : ";
    cin>>c;

    if(a==b && b==c && c==a){
        cout<<"This is a Equilateral triangle.\n";
    }else if(a==b ||b==c||c==a){
        cout<<"This is a Equilateral Isosceles.\n";
    }else{
        cout<<"This is a scalene.\n";
    }
    
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter First side of triangle : 12
 *  Enter Second side of triangle : 34
 *  Enter Third side of triangle : 21
 *  This is a scalene.
 * 
 *  Enter First side of triangle : 12
 *  Enter Second side of triangle : 12
 *  Enter Third side of triangle : 12
 *  This is a Equilateral triangle.
 * 
 * 
*/