/*
 ----------------------- Day 13 ----------------------
 ----- Max Min using Templates     ----------
 --- Date: 21.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T tempmax(T x, T y){
    return (x>y)? x:y;
}

int main(void){
    
    cout<< tempmax<int>(7,3)<<endl;
    cout<< tempmax<double>(7.123,3.12)<<endl;
    cout<< tempmax<char>('a','b')<<endl;

    return 0;
}

/**
 * Sample Output
 * 
 *  7
 *  7.123
 *  b
 * 
 * 
*/