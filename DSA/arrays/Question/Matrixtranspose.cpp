/*
 ----------------------- Day 19 ----------------------
 ----- Matrix Transpoes     ----------
 --- Date: 27.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;



int main(void){

    int n=3;
    int arr[n][n]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<n;i++){
        for(int j=i; j<n; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
        
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
           }
           cout<<endl;
        }

    return 0;
}

/**
 * Sample Output 
 * 
 *  1 4 7 
 *  2 5 8
 *  3 6 9
 * 
 * */ 