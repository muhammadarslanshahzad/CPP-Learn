/*
 ----------------------- Day 2 ----------------------
 ---  If and If else   --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    
    repeat:
        int a;
        cout<<"Enter a number greater than 10 : ";
        cin>>a;

        if(a<10){
            cout<<"hey! you put the wrong input please try again."<<endl;
           goto repeat;
        }

        if(a%2){
            cout<<"You entered an odd integer : "<<a<<endl;
        }
        else{
            cout<<"You entered an even integer : "<<a<<endl;
        }

    return 0;
}


/*
Sample Output
    1st run 
    Enter a number greater than 10 : 89
    You entered an odd integer : 89

    2nd run
    Enter a number greater than 10 : 9
    hey! you put the wrong input please try again.
    Enter a number greater than 10 : 90
    You entered an even integer : 90
*/ 