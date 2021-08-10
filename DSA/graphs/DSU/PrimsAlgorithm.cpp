 /*
 ----------------------- Day 94 ----------------------
 ----- Grapghs __ Prims Algorithm     ----------
 --- Date: 01.08.2021---------------------------------
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
const int N = 1e5+3;
vector<vector<int>> g[N];
vector<bool> vis(N);
vector<int> dist(N), parent(N);
int cost =0;

const int INF = 1e9;


void primsMst(int src){
    for(int i=0; i<n; i++){
        dist[i] = INF;
    }

    set<vector<int>> s;
    dist[src] =0;
    s.insert({0,src});
    while(!s.empty()){
        auto x = *(s.begin());
        vis[x[1]] =  true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost += w;
        for(auto it: g[x[1]]){
            if(vis[it[0]]){
                continue;
            }
            if(dist[it[0]] > it[1]){
                s.erase({dist[it[0]], it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]] = x[1];
            }
        }
    }
}

int main(void){

    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primsMst(0);
    cout<<cost>>endl;

    return 0;
}

/**
 * Sample Output 
 * 
 * 4 5
 * 0 1 10
 * 1 2 15
 * 0 2 5
 * 3 1 2 
 * 3 2 40
 * 17
 * 
 * */ 