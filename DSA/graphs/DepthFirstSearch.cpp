 /*
 ----------------------- Day 86 ----------------------
 ----- Grapghs __ BFS     ----------
 --- Date: 02.08.2021---------------------------------
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

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    //preorder
    vis[node] = 1;

    vector<int> :: iterator it;

    for(it = adj[node].begin(); it != adj[node].end(); it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }

    //postorder
    cout<<node<<" ";

}

int main(void){

    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        vis[i]= false;
    }

    int x,y;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);

    return 0;
}


/**
 * Sample Output 
 * 
 * 7 7 
    1 2
    1 3
    2 4
    2 5
    2 6
    2 7
    7 3
    4 5 6 3 7 2 1
 * 
 * */ 