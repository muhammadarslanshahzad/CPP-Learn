 /*
 ----------------------- Day 95 ----------------------
 ----- Graphs __ Dijkstra Algo     ----------
 --- Date: 11.08.2021---------------------------------
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

const int inf = 1e7;

int32_t main(void){

    int n,m;
    cin>>n>>m;
    vector<int> dis(1+n, inf);
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0; i<m; i++){
        int u,v,w; 
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int source;
    cin>>source;

    dist[source] = 0;
    set<pair<int,int>> s;
    s.insert({0,source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);

        for(auto i : graph[x.second]){
            if(dist[it.first] > dist[x.second] + it.second){
                s.erase({dist[it.first], it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first], it.first});
            }
        }
    }
    

    for(int i =1 ; i<=n; i++){
        if(dist[i] < inf){
            cout<<dist[i]<<" ";
        }else{
            cout<<-1<<" ";
        }
    }



    return 0;
}

/**
 * Sample Output 
 * 
 * 4 4
 * 1 2 24
 * 1 4 20
 * 3 1 3
 * 4 3 12
 * 1
 * 0 24 3
 * 
 * */ 