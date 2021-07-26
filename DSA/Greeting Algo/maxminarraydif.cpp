 /*
 ----------------------- Day 79 ----------------------
 ----- Greedy __ Max and Min of array differnce     ----------
 --- Date: 23.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vii vector<pii>
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define setBits(x) builtin_popcount(x)

int main(void){

    int n; 
    cin>>n;
    vi a(n);
    for(auto &i : a){
        cin>>i;
    }
    sort(a.begin(), a.end());
    long long min=0, max=0;
    for(int i=0; i<n/2; i++){
        max += (a[i+n/2] - a[i]);
        min += (a[2*i+1] - a[2*i]);
    }

    cout<<min<<" "<<max<<endl;
    return 0;
}

/**
 * Sample Output 
 * 
 *  4
 *  12 -3 10 0
 * 5 25
 * 
 * */ 