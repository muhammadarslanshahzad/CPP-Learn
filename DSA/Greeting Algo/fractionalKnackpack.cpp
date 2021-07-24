 /*
 ----------------------- Day 77 ----------------------
 ----- Greedy __ Knapsack problem     ----------
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


bool compare(pii p, pii p1){
    double v1 = (double) p.first/p.second;
    double v2 = (double) p1.first/p1.second;
    
    return v1>v2;
}

int main(void){

    int n; 
    cin>>n;

    vii a(n);

    rep(i,0,n){
        cin>>a[i].first >> a[i].second;
    }
    
    int w;
    cin>>w;
    
    sort(a.begin(), a.end(), compare);

    int ans=0;
    rep(i,0,n){
        if(w >= a[i].second){
            ans += a[i].first;
            w -= a[i].second;
            continue;
        }

        double vw = (double) a[i].first/a[i].second;
        ans += vw*w;
        w=0;
        break;
    }

    cout<<ans<<endl;


    return 0;
}

/**
 * Sample Output 
 * 
 *  5
    21 7
    24 4
    12 6
    40 5
    30 6
    20
    109
 * 
 * 
 * */ 