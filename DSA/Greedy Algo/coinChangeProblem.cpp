 /*
 ----------------------- Day 75 ----------------------
 ----- GreedyAlgo__CoinChangeProblem      ----------
 --- Date: 18.07.2021---------------------------------
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

    rep(i,0,n){
        cin>>a[i];
    }
    int x;
    cin>>x;

    sort(a.begin(), a.end(), greater<int>());
    
    int ans = 0;

    for(int i=0; i<n; i++){
        ans += x/a[i];
        x -= x/a[i] * a[i];
    }
    
    cout<<ans<<endl;
    
    return 0;
}

/**
 * Sample Output 
 * 
 *  10 
    1 
    2
    5
    10
    20
    50
    100
    200
    500
    2000
    350
    3
 * 
 * */ 