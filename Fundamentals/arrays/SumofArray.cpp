/*
 ----------------------- Day 5 ----------------------
 -----  Sum of Array   -----------------------------------
 --- Date: 13.05.2021---------------------------------
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

    int sum=0 ;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    cout<<"Sum of Array is : "<<sum<<endl;

    return 0;
}

/**
 * Sample Output
 * 
 * Enter number : 5
    20
    10
    12
    14
    16
    Sum of Array is : 72
 * 
 * 
*/