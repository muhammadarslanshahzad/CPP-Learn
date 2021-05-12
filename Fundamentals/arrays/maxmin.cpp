/*
 ----------------------- Day 4 ----------------------
 -----  Maximum and Minimum in array   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=arr[1], min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }

    cout<<"maxmium number is : "<<max<<" \nminimum number is : "<<min;

    return 0;
}

/**
 * Sample Output
 * 
 * Enter number : 5
 *  1
 *  21
 *  45
 *  12
 *  12
 *  maxmium number is : 45 
 *  minimum number is : 1
 * 
*/