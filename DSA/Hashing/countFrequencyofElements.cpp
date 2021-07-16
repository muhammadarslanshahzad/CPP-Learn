 /*
 ----------------------- Day 68 ----------------------
 ----- Hashing Count Freq of ELements    ----------
 --- Date: 15.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define repeat(i,a,b) for(int i=a; i<b; i++)

int main(void){

    int n;
    cin>> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }


    unordered_map<int, int> freq;
    repeat(i,0,n){
        freq[a[i]]++;
    }

    unordered_map<int, int> :: iterator it;

    for(it= freq.begin(); it!=freq.end(); it++){
        cout<<it->first <<" "<<it->second<<endl;
    }
    


 
    return 0;
}

/**
 * Sample Output 
 * 
 * 6
    1
    2
    1
    3
    2
    1
    1 3
    2 2
    3 1
 * 
 * */ 