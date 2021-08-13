 /*
 ----------------------- Day 97 ----------------------
 ----- DP __ Knap Sack     ----------
 --- Date: 013.08.2021---------------------------------
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

const int N = 1e3+2, MOD = 1e9+7;
int val[N], wt[N];

int dp[N][N];

int KnapSack(int n , int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }

    if(dp[n][w] != -1){
        return dp[n][w];
    }

    if(wt[ n-1] > w){
        dp[n][w] = KnapSack(n-1, w);
    }
    dp[n][w] = max(KnapSack(n-1, w), KnapSack(n-1, w-wt[n-1])+val[n-1]);

    return dp[n][w];
}

int main(void){

    rep(i,0,N){
        rep(j,0,N){
            dp[i][j] = -1;
        }
    }

    int n;
    cin>>n;
    
    rep(i,0,n){
        cin>> wt[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    

    int w;
    cin>> w;

    cout<<KnapSack(n,w)<<endl;


    return 0;
}

/**
 * Sample Output 
 * 
 *  3       
    15 30 45
    60 100 150 
    50
    250
 * 
 * */ 