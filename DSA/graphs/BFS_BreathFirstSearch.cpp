 /*
 ----------------------- Day 85 ----------------------
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
    q.push(1);
    vis[1]=true;

    while(!q.empty()){
        int node = q.front();

        q.pop();
        cout<<node<<endl;

        vector<int>:: iterator it;
        for(it=adj[node].begin(); it!= adj[node].end(); it++){
            if(!vis[*it]){
                vis[*it] =1;
                q.push(*it);
            }
        }

    }

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
    1
    2
    3
    4
    5
    6
    7

 * 
 * 
 * 
 * */ 