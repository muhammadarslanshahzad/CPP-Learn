/*
 ----------------------- Day 4 ----------------------
 -----  Functions  -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

void bubblesort(int a[], int s);     //function prototype
void swap(int *a, int*b);

//Function definitions 
void bubblesort(int a[], int s){
   int i, j;
   bool swapped;
   for (i = 0; i < s-1; i++)
   {
     swapped = false;
     for (j = 0; j < s-i-1; j++)
     {
        if (a[j] > a[j+1])
        {
           swap(&a[j], &a[j+1]);    //call by reference
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void printarray(int a[], int n){
      cout<<"Values after Sorting\n";
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Value at Index"<<i<<" is : "<<a[i]<<" "<<endl;
    }
}


int main(void){

    string a;
    cout<<"Enter a String : ";
    cin>>a;

    cout<<"Length of String is : "<<a.length()<<endl;       //length() is a library function return the length of array or string

    int n;
    cout<<"Enter number (you want to put values) : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);     //function call by value
    printarray(arr, n);

    return 0;
}

/**
 * Sample Output
 * 
*/
