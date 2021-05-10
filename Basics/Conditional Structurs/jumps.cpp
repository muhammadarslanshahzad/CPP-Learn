/*
 ----------------------- Day 2 ----------------------
 ---  Jumps Statements  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){

    int a;
    cout<<"Enter input : "<<endl;
    cin>> a;
    int i;
    for(i=2; i<a; i++){
        if(a%i ==0){
            cout<<"Non number"<<endl;
            break;
        }
    }

    if(a==i){
        cout<<"prime"<<endl;
    }
   //continue is used to skip an iteration in the loop 
   //go to is used to go back at a specific location as we used before

    return 0;
}


/*
Sample Output

    1st run 
        Enter input : 
        12
        is a Non number
    2nd run
    
        Enter input : 
        17
        prime   
   
*/ 