/*
 ----------------------- Day 17 ----------------------
 ----- Sub Array     ----------
 --- Date: 25.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void maxiSum(int a[], int n){
    int maxSum= INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            maxSum=max(maxSum, sum);
        }
    }
    cout<<maxSum<<" ";
}

int main(void){
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int * arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxiSum(arr, n);

    return 0;
}

/**
 * Sample Output 
 * 
 * Enter size of array :5
    12
    1
    1
    1
    1
    16 
 * 
 * */ 