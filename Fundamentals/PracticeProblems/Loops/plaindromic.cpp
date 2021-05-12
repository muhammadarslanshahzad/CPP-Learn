/*
 ----------------------- Day 3 ----------------------
 -----  Plain Dromic Pattern  -----------------------------------
 --- Date: 11.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
     int row,j;
    cout<<"Enter noumber of rows : ";
    cin>>row;
    for(int i=1; i<=row;i++){
        int k=i;
        for(j=1;j<=(row-i);j++){
            cout<<"  ";
        }
        for(;j<=row; j++){
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<(row+i);j++){
            k++;
            cout<<k<<" ";
        }
        for(;j<=(2*row-1);j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Sample Output
Enter noumber of rows : 5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5  
2nd run
Enter noumber of rows : 10
                  1
                2 1 2
              3 2 1 2 3
            4 3 2 1 2 3 4
          5 4 3 2 1 2 3 4 5
        6 5 4 3 2 1 2 3 4 5 6
      7 6 5 4 3 2 1 2 3 4 5 6 7
    8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
  9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10

*/ 