 /*
 ----------------------- Day 87 ----------------------
 ----- Grapghs __ BFS     ----------
 --- Date: 03.08.2021---------------------------------
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

    int n,m ;
    cin>>n>>m;
    int count =0;
    vector<vector<int>> adj(n);
    vector<int> indeg(n,0);
     for(int i=0; i<m; i++){
         int u, v;
         cin>>u>>v;
         adj[u].push_back(v);
         indeg[v]++;
    }

    queue<int> pq;
    for(int i=0; i<n; i++){
        if(indeg[i] == 0){
            pq.push(i);
        }
    }

    while(!pq.empty()){
        count++;
        int x = pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it : adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }


    return 0;
}

/**
 * Sample Output 
 * 
 * 4 3
    0 1
    1 2
    2 3 
    0 1 2 3
 * 
 * */ 