/*
 ----------------------- Day 2 ----------------------
 ---  Nested  If else  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){

    repeat: 
        int a;
        cout<<"Enter a number : ";
        cin>>a;

        if(a<0){
            cout<<"wrong input should be a postive integer!"<<endl;
            goto repeat;
        }
        else{
            if(a%2==0){
                cout<<"Even integer "<<endl;
            }
            else{
                cout<<"Odd integer"<<endl;
            }
        }

    return 0;
}


/*
Sample Output

    1st run 
        Enter a number : 10
        Even integer

    2nd run
        Enter a number : -2
        wrong input should be a postive integer!
        Enter a number : 11
        Odd integer
*/ 