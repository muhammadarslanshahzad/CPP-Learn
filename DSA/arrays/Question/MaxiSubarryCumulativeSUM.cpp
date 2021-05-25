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
    int currsum[n+1];
    currsum[0]=0;
    for(int i=0;i<n;i++){
        currsum[i] = currsum[i-1] + a[i-1];
    }
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=0; j<i; j++){
            sum=currsum[i]-currsum[j];
            maxSum=max(maxSum, sum);
        }
    }
    cout<<maxSum;
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
 * Enter size of array :5
    12
    12
    12
    14
    15
50
 * 
 * */ 