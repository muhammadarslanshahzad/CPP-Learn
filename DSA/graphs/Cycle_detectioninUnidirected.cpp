 /*
 ----------------------- Day 88 ----------------------
 ----- Grapghs __ Cycle Detection in Unidirected Graphs     ----------
 --- Date: 04.08.2021---------------------------------
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

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent){
    visited[src] = true;
    for(auto i : adj[src]){
        if(i != parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] and isCycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;
}

int main(void){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle = false;
    vector<bool> visited(n,false);
    for(int i=0; i<n; i++){
        if(!visited[i] and isCycle(i,adj,visited, -1)){
            cycle = true;
        }
    }

    if(cycle){
        cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }



    return 0;
}

/**
 * Sample Output 
 * 
 *  4 3 
    0 1
    1 2
    2 0
    cycle is present
 * */ 