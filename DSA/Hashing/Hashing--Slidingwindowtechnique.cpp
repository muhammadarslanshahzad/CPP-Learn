 /*
 ----------------------- Day 71 ----------------------
 ----- Hashing--Sliding Windows Technique      ----------
 --- Date: 18.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

int main(void){

    int n, i;
    cin>>n>>i;

    vi a(n);
    rep(j,0,n)
        cin>>a[j];
    
    int s=0 , ans= INT_MAX;
    rep(j,0,i)
    {
        s += a[j];
    }

    ans = min(ans, s);

    rep(j,1,n-i+1){
        s -= a[j-1];
        s += a[j+i-1];
        ans = min(ans, s);
    }

    cout<<ans<<endl;
 
    return 0;
}

/**
 * Sample Output 
 *  8 3
    -2
    10
    1
    3
    2
    -1
    4
    5
    4
 * 
 * */ 