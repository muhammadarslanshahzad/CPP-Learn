/*
 ----------------------- Day 2 ----------------------
 ---  IF else If ladder  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    
    char a;
    cout<<"Enter a option from a-e: ";
    cin>>a;

    switch(a){
        case 'a':
            cout<<"Breakfast"<<endl;
            break;
        case 'b':
            cout<<"Time to code"<<endl;
            break;
        case 'c':
            cout<<"Lunch"<<endl;
            break;
        case 'd':
            cout<<"Meetings"<<endl;
            break;
        case 'e':
            cout<<"Go back home "<<endl;
            break;
        default:
            cout<<"Wrong input, Try again !"<<endl;
            break;
    }

    return 0;
}


/*
Sample Output

    1st run 
    Enter a option from a-e: a
    Breakfast

    2nd run
    Enter a option from a-e: b
    Time to code
   
    3rd run  
    Enter a option from a-e: f
    Wrong input, Try again !
*/ 