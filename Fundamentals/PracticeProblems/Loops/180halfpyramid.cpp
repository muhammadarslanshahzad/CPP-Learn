/*
 ----------------------- Day 3 ----------------------
 -----  180* Half Pyramid  -----------------------------------
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
    for(int i=1; i<=row;i++){
        for(int j=1; j<=row;j++){
            if(j<= row-i){
                cout<<" ";
            }
            else{
                cout<<"&";
            }
        }
        cout<<endl;
    }

    return 0;
}

/*
Sample Output
Enter noumber of rows : 4
   &
  &&
 &&&
&&&&
        
2nd run
Enter noumber of rows : 7
      &
     &&
    &&&
   &&&&
  &&&&&
 &&&&&&
&&&&&&&

*/ 