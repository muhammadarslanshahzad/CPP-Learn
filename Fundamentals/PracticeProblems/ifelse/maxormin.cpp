/*
 ----------------------- Day 4 ----------------------
 -----  Maximum Number or Minimum    -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int a,b;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<"Enter your second number : ";
    cin>>b;

    int max, min;
    if(a>b){
        max=a;
        min=b;
    }else{
        min=a;
        max=b;
    }
    cout<<"Maximum number is : "<<max<<endl;
    cout<<"Minimum number is : "<<min<<endl;

    return 0;
}

/**
 * Sample Output
 *  Enter your first number : 12
 *  Enter your second number : 6
 *  Maximum number is : 12
 *  Minimum number is : 6
 * 
 * 
*/