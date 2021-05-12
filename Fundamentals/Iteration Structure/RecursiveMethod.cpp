/*
 ----------------------- Day 2 ----------------------
 ---  Function Recursion  --------------
 --- Date: 10.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int fact(int a){
    if(a>1){
        return a * fact(a-1);
    }
    return 1;
}


int main(void){
    
    int x;
    cout<<"Enter the number you want to calculate the factorial : ";
    cin>>x;

    int f=fact(x);
    cout<<"factorial of numbe is : "<<f<<endl; 
    return 0;
}


/*
Sample Output
        
    1st run 

    Enter the number you want to calculate the factorial : 7
    factorial of numbe is : 5040
    
    2nd run 

    Enter the number you want to calculate the factorial : 12
    factorial of numbe is : 479001600

    3rd run 
    
    Enter the number you want to calculate the factorial : 5
    factorial of numbe is : 120

*/ 