/*
 ----------------------- Day 5 ----------------------
 -----  Alternate Array   -----------------------------------
 --- Date: 13.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i=i+2){
        cout<<arr[i]<<" ";
    }  


    return 0;
}

/**
 * Sample Output
 * 
 * Enter any number : 5
    1
    2
    3
    4
    5 
    1 3 5 
 * 
*/