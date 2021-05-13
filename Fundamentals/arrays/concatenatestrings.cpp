/*
 ----------------------- Day 5 ----------------------
 -----  String concatenation   -----------------------------------
 --- Date: 13.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string a , b;
    cout<<"Enter first string : ";
    getline(cin, a);
    cout<<"Enter second string : ";
    getline(cin, b);

    cout<<a<<b<<endl;

    
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter first string : this is string 1 
    Enter second string : this is string 2 
    this is string 1this is string 2
 * 
 * 
*/