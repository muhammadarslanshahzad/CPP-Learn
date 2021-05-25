/*
 ----------------------- Day 16 ----------------------
 ----- Array Max MIN     ----------
 --- Date: 24.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

//finding max
int max(int arr[], int size){
    int temp=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp;
}

//finding min
int min(int arr[], int size){
    int temp=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    return temp;
}


int main(void){

    int n; 
    cout<<"Enter size of array : ";
    cin>>n;
    int *a = new int[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //calling functions
    cout<<"Maximum number is : "<<max(a, n)<<endl;
    cout<<"Minimum number is : "<<min(a, n)<<endl;
    
    return 0;
}

/**
 * Sample Output
 * Enter size of array : 5
    12
    1
    3
    67
    89
    Maximum number is : 89
    Minimum number is : 1
 * 
 * 
*/