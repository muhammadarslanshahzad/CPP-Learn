 /*
 ----------------------- Day 62 ----------------------
 ----- Heap Sort      ----------
 --- Date: 09.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &a, int n, int i){
    int max =i;
    int l =2*i+1;
    int r =2*i+2;

    if(l<n && a[l] > a[max]){
        max = l;
    }    
    
    if(r<n && a[r] > a[max]){
        max = r;
    }    
    
    if(max != i){
        swap(a[i], a[max]);
        heapify(a, n, max);
    }
}

void heapsort(vector<int> &arr){
    int n= arr.size();

    for(int i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }

    for(int i=n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(void){

    int n ;
    cin>>n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    heapsort(arr);
    cout<<"Sorted Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/**
 * Sample Output 
 * 
 *  6
 *  4
    3
    2
    1
    5
    6
    Sorted Array is: 1 2 3 4 5 6 
 * 
 * */ 