
 /*
 ----------------------- Day 90 ----------------------
 ----- Grapghs __ Connected Components     ----------
 --- Date: 08.08.2021---------------------------------
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

int n,m;
vector<vector<int>> adj;
vector<int> components;
vector<bool> vis;

int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx] = true;
    int ans = 1;
    for(auto i : adj[idx]){
        if(!vis[i]){
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}


int main(void){
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool> (n,0);

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }

    long long ans = 0;
    for(auto i : components){
        ans += i*(n-i);
    }

    cout<<(ans/2);
    return 0;
}

/**
 * Sample Output 
 * 
 * 5 3
 * 0 1
 * 2 3 0 4
 * 6
 * 
 * */ 