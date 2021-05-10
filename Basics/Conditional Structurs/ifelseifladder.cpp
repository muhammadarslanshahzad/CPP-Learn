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

    if(a == 'a'){
        cout<<"Breakfast"<<endl;
    }
    else if(a == 'b'){
        cout<<"Time to code"<<endl;
    }
    else if(a == 'c'){
        cout<< "Lunch "<<endl;
    }
    else if(a == 'd'){
        cout<<"Meetings"<<endl;
    }
    else if(a == 'e'){
        cout<<"Time to leave for home "<<endl;
    }
    else{
        cout<<"Wrong input, Try again !";
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