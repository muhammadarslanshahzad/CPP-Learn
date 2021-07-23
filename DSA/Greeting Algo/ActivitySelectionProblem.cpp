 /*
 ----------------------- Day 76 ----------------------
 ----- Greedy __ Activity Selection Probs     ----------
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

    int n ;
    cin>>n;

    vector<vector<int>> v;

    for(int i=0; i<n; i++){
        int strt, end;
        cin>>strt>>end;
        v.push_back({strt, end});
    }

    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b ){
        return a[1]<b[1];
    });
    int take = 1; 
    int end = v[0][1];

    for(int i=1; i<n; i++){
        if(v[i][0] >= end){
            take++;
            end = v[i][1];
        }
    } 

    cout<<take<<"\n";

    return 0;
}

/**
 * Sample Output 
 * 
 *  3
 *  10 20 
 *  12 15
 *  20 30 
 *  2
 * 
 * */ 