/*
 ----------------------- Day 3 ----------------------
 -----  Half Pyramid  -----------------------------------
 --- Date: 11.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int row;
    cout<<"Enter noumber of rows : ";
    cin>>row;
    for(int i=1; i<=row;i++){
        for(int j=0; j<i;j++){
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
            *
            **
            ***
            ****
            *****
            ******
        2nd run
            Enter noumber of rows : 4
            *
            **
            ***
            ****
*/ 