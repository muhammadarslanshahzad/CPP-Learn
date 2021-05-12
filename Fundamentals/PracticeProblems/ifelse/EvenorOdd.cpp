/*
 ----------------------- Day 4 ----------------------
 -----  Even or Odd Number   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%2){
        cout<<n<<" is an Odd number."<<endl;
    }else{
        cout<<n<<" is an Even Number."<<endl;
    }
    
    return 0;
}

/**
 * Sample Output
 *
 *  Enter a number : 12
 *  12 is an Even Number. 
 * 
 *  Enter a number : 3
 *  3 is an Odd number.
 * 
*/