/*
 ----------------------- Day 3 ----------------------
 -----  Rectangle Problem   -----------------------------------
 --- Date: 11.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int r,c=4;
    cout<<"Plese Enter number of rows : ";
    cin>>r;
    for(int i=0; i<r;i++){
        for(int j=0;j<c; j++){
            cout<<"+ ";
        }
        cout<<endl;
    }

    int r1, c1;
    r1=r;
    cout<<"\n\nPlease Enter number of Columns here ; ";
    cin>>c1;
    cout<<"\n Now Pattern will look like "<<endl;
    for(int i=0; i<r1;i++){
        for(int j=0;j<c1; j++){
            cout<<"+ ";
        }
        cout<<endl;
    }


    

    return 0;
}

/*
    Sample Output:

        Plese Enter number of rows : 8
        + + + + 
        + + + + 
        + + + + 
        + + + + 
        + + + + 
        + + + + 
        + + + + 
        + + + + 


        Please Enter number of Columns here ; 50

        Now Pattern will look like 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
        + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
*/ 