/*
 ----------------------- Day 21 ----------------------
 ----- Stack and Heap     ----------
 --- Date: 28.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


int main(void){

    int a=10;
    int *p= new int();
    *p=a;
    cout<<*p<<endl;
    delete[] p;

    p=new int[2];
    cout<<p<<endl;
    delete[] p;

    return 0;
}

/**
 * Sample Output 
 * 
 * 10
 * 0x9715b0
 * 
 * */ 