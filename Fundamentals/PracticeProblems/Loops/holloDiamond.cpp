/*
 ----------------------- Day 3 ----------------------
 -----  Diamond Pattern  -----------------------------------
 --- Date: 11.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
   int r,j;
    cout<<"Enter number of Rows : ";
    cin>>r;

    int space= (2*r-1)/2;
    for(int i=1; i<=r;i++){
        for(j=1; j<=space; j++){
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            } else{
                cout<<" ";
            } 
        }
        cout<<endl;
        space--;
    }
    space=0;
    for(int i=r; i>=1; i--){
        for(j=1; j<=space; j++){
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            } else{
                cout<<" ";
            } 
        }
        cout<<endl;
        space++;
    }  
    return 0;
}

/*
Sample Output

Enter number of Rows : 8
       *       
      * *      
     *   *     
    *     *    
   *       *   
  *         *  
 *           * 
*             *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *

*/