/*
 ----------------------- Day 3 ----------------------
 -----  Floyd's Pyramid  -----------------------------------
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
    int num =1;

    for(int i=1; i<=row;i++){
        for(int j=0; j<i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    num--;
    cout<<"\n-------------inverted case-----------------\n";
    for(int i=row; i>0;i--){
        for(int j=i; j>0;j--){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}

/*
    Sample Output
    Enter noumber of rows : 5
    1 
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

    -------------inverted case-----------------
    15 14 13 12 11
    10 9 8 7
    6 5 4
    3 2
    1

*/ 