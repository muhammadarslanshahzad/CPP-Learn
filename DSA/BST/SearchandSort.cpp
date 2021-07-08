/*
 ----------------------- Day 61 ----------------------
 ----- Search in Sorted and rotated array     ----------
 --- Date: 08.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int searchInArray(int arr[], int key, int left, int right){
    if(left>right){
        return -1;
    }

    int mid =(left+right)/2;
    if(arr[mid] == key){
        return mid;
    }

    if(arr[left] <= arr[mid]){
        if(key >= arr[left] && key <= arr[mid]){
            return searchInArray(arr, key, left, mid-1);
        }
        return searchInArray(arr, key, mid+1, right);
    }

    if(key >= arr[mid] && key <= arr[right]){
        return searchInArray(arr, key, mid+1, right);
    }
    return searchInArray(arr, key, left, mid-1);
        
}

int main(void){

    int arr[] = {6,7,8,9,10,1,2,5};

    int n =8; 
    int key = 8;

    int indx = searchInArray(arr, key, 0, n-1);

    if(indx == -1){
        cout<<"Key doesn't exit !"<<endl;
    }else{
        cout<<"Key is present at index : "<<indx<<endl;
    }
    return 0;
}

/**
 * Sample Output 
 * 
 * Key is present at index : 2
 * 
 * */ 