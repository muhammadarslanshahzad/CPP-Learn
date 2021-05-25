/*
 ----------------------- Day 17 ----------------------
 ----- Sub Array     ----------
 --- Date: 25.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void subArry(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(void){
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int * arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    subArry(arr, n);

    return 0;
}

/**
 * Sample Output 
 * 
 * Enter size of array :10
        1
        1
        3
        45
        4
        3
        5
        6
        12
        2
        1 1 1 1 1 3 1 1 3 45 1 1 3 45 4 1 1 3 45 4 3 1 1 3 45 4 3 5 1 1 3 45 4 3 5 6 1 1 3 45 4 3 5 6 12 1 1 3 45 4 3 5 6 12 2 1 1 3 1 3 45 1 3 45 4 1 3 45 4 3 1 3 45 4 3 5 1 3 45 4 3 5 6 1 3 45 4 3 5 6 12 1 3 45 4 3 5 6 12 2 3 3 45 3 45 4 3 45 4 3 3 45 4 3 5 3 45 4 3 5 6 3 45 4 3 5 6 12 3 45 4 3 5 6 12 2 45 45 4 45 4 3 45 4 3 5 45 4 3 5 6 45 4 3 5 6 12 45 4 3 5 6 12 2 4 4 3 4 3 5 4 3 5 6 4 3 5 6 12 4 3 5 6 12 2 3 3 5 3 5 6 3 5 6 12 3 5 6 12 2 5 5 6 5 6 12 5 6 12 2 6 6 12 6 12 2 12 12 2 2
 * 
 * 
 * */ 