/*
 ----------------------- Day 13 ----------------------
 ----- Bubble sort using Templates     ----------
 --- Date: 21.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

template <typename T>

void Bubble(T arr[], T size){
    for(int i=0; i<size; i++){
        for(int j=size-1; i<j ; j--){
            if(arr[j]< arr[j-1]){
                T temp; 
                temp= arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}


int main(void){
    
    int arr[10]={10,20,120,123,312,141,411,897,1231};
    int n=10;
    Bubble<int>(arr, n);
  
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
  

    return 0;
}

/**
 * Sample Output
 * 
 * Sorted array : 0 10 20 120 123 141 312 411 897 1231 
*/