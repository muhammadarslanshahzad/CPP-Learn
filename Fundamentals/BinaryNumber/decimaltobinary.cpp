/*
 ----------------------- Day 4 ----------------------
 -----  Decimal to Binary conversion   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cout<<"Enter deciaml number here : ";
    cin>>n;

    vector<int> arr;
    while(n>0){
         arr.push_back(n%2);
         n=n/2;
        
    }
    cout<<"Binay to deciaml conversion is:  ";
    for (auto ir = arr.rbegin(); ir != arr.rend(); ++ir)
    {    cout << *ir << " ";
    
    }

    return 0;
}

/**
 * Sample Output
 *
 *  Enter deciaml number here : 45
 *  Binay to deciaml conversion is:  1 0 1 1 0 1
*/