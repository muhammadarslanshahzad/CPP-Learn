/*
 ----------------------- Day 4 ----------------------
 -----  Arrays   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    int n;
    cout<<"Enter number of elements you wanna to input : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

/**
 * Sample Output
 * 
*/