/*
 ----------------------- Day 3 ----------------------
 -----  Half Pyramid  -----------------------------------
 --- Date: 11.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int row;
    cout<<"Enter noumber of rows : ";
    cin>>row;
    for(int i=row; i>0;i--){
        for(int j=i; j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

/*
    Sample Output

        1st run 
            Enter noumber of rows : 6
            ******
            ***** 
            ****  
            ***   
            **    
            *
        2nd run
            Enter noumber of rows : 4
            ****
            ***
            **
            *
*/ 