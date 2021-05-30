/*
 ----------------------- Day 21 ----------------------
 ----- Vector     ----------
 --- Date: 29.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;




int main(void){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

//printing vextor using iterator
    vector<int>::iterator it;
    for(it=arr.begin(); it!=arr.end(); it++){
       cout<<*it<<endl;
      }

    arr.pop_back();

    //printing using loop only
    for(int i=0; i<arr.size(); i++){
        cout<<endl<<arr[i]<<endl;
    }


    return 0;
}

/**
 * Sample Output 
 * 
 *  10
    20
    30
 * 
 * 
 *  10
    20
    30

    10
    20
 * */ 