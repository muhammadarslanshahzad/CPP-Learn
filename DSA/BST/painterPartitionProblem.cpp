 /*
 ----------------------- Day 60 ----------------------
 ----- Painter Patition Problem      ----------
 --- Date: 07.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int findFeasible(int boards[], int n, int limit){
    int sum=0, painter= 1;
    for(int i=0; i<n; i++){
        sum += boards[i];
        if(sum> limit){
            sum = boards[i];
            painter++;
        }
    }

    return painter;
}

int painterPartition(int boards[], int n , int m){
    int totalLength = 0 , k=0;
    for(int i =0; i<n; i++){
        k = max(k, boards[i]);
        totalLength += boards[i];
    }

    int low =k, high= totalLength;
    while (low<high)
    {
        int mid = (low+high)/2;

        int paint = findFeasible(boards, n, mid);

        if(paint <= m){
            high = mid;
        }else{
            low = mid+1;
        }
    }
    return low;
 }

int main(void){

    int arr[] ={ 10,20,30,40};
    int n=4, m=2;

    cout<<"Minimum time to paint boards : "<<painterPartition(arr, n, m);

    return 0;
}

/**
 * Sample Output 
 * 
 * Minimum time to paint boards : 60
 * 
 * */ 