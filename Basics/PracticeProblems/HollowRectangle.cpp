/*
 ----------------------- Day 3 ----------------------
 -----  Hollow Rectangle Problem   -----------------------------------
 --- Date: 11.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main(void){
    int row , col;
    cout<<"Enter noumber of rows : ";
    cin>>row;
    cout<<"Enter number of col : ";
    cin>>col;
    for(int i=1; i<=row;i++){
        for(int j=1; j<=col;j++){
            if((i==1 || i==row) || (j==1 || j==col)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;   
}  

/*
Sample Output
    Enter noumber of rows : 10
    Enter number of col : 50
    **************************************************
    *                                                *
    *                                                *
    *                                                *
    *                                                *
    *                                                *
    *                                                *
    *                                                *
    *                                                *
    **************************************************

*/