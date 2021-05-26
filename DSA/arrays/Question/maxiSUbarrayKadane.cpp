/*
 ----------------------- Day 18 ----------------------
 ----- Maximum Sub Array using Kadaene ALgo     ----------
 --- Date: 26.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void subArry(int a[], int n){
    int currsum=0;
    int maxSum = INT_MIN;

    int sum =0;
    for(int j=0; j<n; j++){
        currsum=a[j];
        if(currsum < 0){
            currsum=0;
        }
        maxSum=max(maxSum, currsum);
    }

    cout<<maxSum;
}

int main(void){
    int n;
    cout<<"Enter size of array : ";
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
 * Enter size of array : 5
 *  12
 *  1
 *  1
 *  1
 *  1
 *  12
 * 
 * */ 