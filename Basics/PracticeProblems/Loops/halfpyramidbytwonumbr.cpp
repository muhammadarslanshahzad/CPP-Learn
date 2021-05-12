/*
 ----------------------- Day 3 ----------------------
 -----  Half Pyramid by using two numbers  -----------------------------------
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
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"\n-------------inverted case-----------------\n";
    for(int i=row; i>0;i--){
        for(int j=i; j>0;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
    Sample Output

        1st run 
        Enter noumber of rows : 5
        1 
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5

        -------------inverted case-----------------
        5 5 5 5 5
        4 4 4 4
        3 3 3
        2 2
        1
*/ 