 /*
 ----------------------- Day 70 ----------------------
 ----- Hashing--No of subarrays with sum zero      ----------
 --- Date: 17.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

int main(void){

    int n;
    cin>> n;

    vi a(n);
    rep(i,0,n){
        
      cin>>a[i];
    }
    
    map<int, int> count;

    int preSum =0;

    rep(i,0,n)
    {
        preSum += a[i];
        count[preSum]++;
    }

    int ans=0;
    map<int, int> ::iterator it;

    for(it = count.begin(); it!=count.end(); it++){
        int c = it->second;
        ans += (c*(c-1))/2;

        if(it->first ==0){
            ans += it->second;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/**
 * Sample Output 
 * 
 * 4
    1 -1 1 -1
    3
    4
 * 
 * */ 