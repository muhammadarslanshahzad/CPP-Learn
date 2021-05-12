/*
 ----------------------- Day 4 ----------------------
 -----  Swap Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp =*a;
    *a =*b;
    *b=temp;
}

int main(void){
    
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter Second number : ";
    cin>>b;
    swap(a,b);
    cout<<"Number after Swap "<<a<<"   "<<b<<endl; 

    return 0;
}

/**
 * Sample Output
 * 
 *  Enter first number : 5
 *  Enter Second number : 4
 *  Number after Swap 4   5
 * 
 * 
*/