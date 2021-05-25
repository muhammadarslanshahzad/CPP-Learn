/*
 ----------------------- Day 16 ----------------------
 ----- Array Sorting     ----------
 --- Date: 24.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1);
}    
 
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main (void){
    int a;
    cin>>a;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
      
    //print orginial 
    printArray(arr, a);
    //reversing array 
    reverseArray(arr,0 ,a-1);  
    
    //print reversed 
    printArray(arr, a);
    
    return 0;
}

/**
 * Sample Output
 * 
 *  5
    12
    12
    42
    4
    5
    12 12 42 4 5 
    5 4 42 12 12
 * 
 * 
 * */ 