/*
 ----------------------- Day 12 ----------------------
 -----  function Templates    ----------
 --- Date: 20.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool isEqual(T x, T y){
    return (x==y);
}

int main(void){
    cout<<isEqual(5,6)<<endl;
    cout<<isEqual(7,6)<<endl;
    cout<<isEqual(7,7)<<endl;

    return 0;
}

/**
 * Sample Output
 *  0
 *  0
 *  1
 * 
*/