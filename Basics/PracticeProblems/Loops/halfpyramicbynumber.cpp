/*
 ----------------------- Day 3 ----------------------
 -----  Half Pyramid By Numbers -----------------------------------
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
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"\n\n---------------------------Inverted case ------------------------------\n"<<endl;
     for(int i=row; i>0;i--){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

/*
    Sample Output

        1st run 
         Enter noumber of rows : 4
            1
            12
            123
            1234


            ---------------------------Inverted case ------------------------------

            1234
            123
            12
            1

        2nd run
            1
            12
            123
            1234
            12345
            123456
            1234567
            12345678
            123456789
            12345678910


            ---------------------------Inverted case ------------------------------

            12345678910
            123456789
            12345678
            1234567
            123456
            12345
            1234
            123
            12
            1
*/ 