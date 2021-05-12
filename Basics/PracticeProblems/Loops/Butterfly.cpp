/*
 ----------------------- Day 3 ----------------------
 -----  Butterfly pattern   -----------------------------------
 ----- Date: 11.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int row;
    cout<<"Enter number of rows : ";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space=2*row-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space=2*row-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }



    return 0;
}

/*
    Enter number of rows : 6
    *          *
    **        **
    ***      ***
    ****    ****
    *****  *****
    ************
    ************
    *****  *****
    ****    ****
    ***      ***
    **        **
    *          *
  
*/