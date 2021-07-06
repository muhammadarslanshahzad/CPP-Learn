/*
 ----------------------- Day 59 ----------------------
 ----- Page Allocation Problem     ----------
 --- Date: 05.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <iostream>
#include <climits>

using namespace std;

bool isFeasible(int arr[], int m, int n, int min){
    int req = 1, sum =0;

    for(int i =0 ; i<n; i++){
        if(arr[i] > min){
            return false;
        }

        if(sum+arr[i] > min){
            req++;
            sum = arr[i];

            if(req > m){
                return false;
            }
        }
        else{
            sum += arr[i];
        }

    }
    return true;
}

int allocateMinimumPages(int arr[], int n, int m ){
    int sum =0;
    if(n<m){
        return -1;
    }

    for(int i=0; i<n; i++){
        sum = sum +arr[i];
    }

    int start = 0, end = sum , ans = INT_MAX;

    while (start <= end)
    {
        int mid = (start + end)/2;

        if(isFeasible(arr, n, m , mid)){
            ans = min(ans, mid);
            end = mid-1;
        }else{
            start= mid+1;
        }
    }
    
    return ans;
}

int main(){

    int arr[] = {12, 34, 67, 90};
    int n=4;

    int m =2;

    cout<<"The Minimum no of Pages is: "<<allocateMinimumPages(arr, n,m)<<endl;
 
    return 0;
}

/**
 * Sample Output 
 * 
 * The Minimum no of Pages is: 34
 * 
 * */ 