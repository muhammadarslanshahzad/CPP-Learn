/*
 ----------------------- Day 18 ----------------------
 ----- Two-D  Array     ----------
 --- Date: 26.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


int main(void){

    int n, m;
    cout<<"Enter The size : "<<endl;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[n][m];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[n][m]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}

/**
 * Sample Output 
 * 
 * Enter The size : 
    1
    2
    1
    1
    1 1
 * 
 * */ 