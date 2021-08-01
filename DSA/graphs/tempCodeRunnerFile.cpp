 /*
 ----------------------- Day 86 ----------------------
 ----- Grapghs __ BFS     ----------
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

const int N = 1e5+2;
bool vis[N];

vector<int> adj[N];

int main(void){

    for(int i=0; i<N; i++){
        vis[i]=0;
    }

    int n,m;
    cin>>n>>m;

    int x,y;

    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;