 /*
 ----------------------- Day 89 ----------------------
 ----- Grapghs __ Cycle Detection in Directed Graphs     ----------
 --- Date: 05.08.2021---------------------------------
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

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> & visited, vector<int> &stack){
    stack[src] = true;
    if(!visited[src]){
        visited[src] = true;
        for(auto i : adj [src]){
            if(!visited[i] and isCycle(i,adj,visited, stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
    stack [src] = false;
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
    vector<int> stack(n,0);
    vector<bool> visited(n,0);
    for(int i=0; i<n; i++){
        if(!visited[i] and isCycle(i,adj, visited, stack)){
            cycle = true;
        }
    }

    if(cycle){
        cout<<"Cylce is present";
    }else{
        cout<<"Cycle is not present";
    }



    return 0;
}

/**
 * Sample Output 
 * 
 *  4 3
    0 1
    1 2 
    2 1
    Cylce is present
 * */ 