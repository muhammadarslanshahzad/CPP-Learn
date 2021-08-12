 /*
 ----------------------- Day 96 ----------------------
 ----- Grapghs __ BELLMAN FORD     ----------
 --- Date: 12.08.2021---------------------------------
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

const int INF = 1e9;

int32_t main(void){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m ; i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }

    int src;
    cin>>src;
    vector<int> dist(n,INF);
    dist[src] = 0;
    for(int iter = 0; iter<n-1; iter++){
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = dist[v],w + dist[u];
        }
    }

    for(auto i : dist){
        cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}

/**
 * Sample Output 
 * 
 * 
 * 
 * */ 