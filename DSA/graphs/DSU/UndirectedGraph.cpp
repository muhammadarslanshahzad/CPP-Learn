 /*
 ----------------------- Day 92 ----------------------
 ----- DSU__Grapghs __ Undirected Graphs     ----------
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

const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);

void make__set(int v){
    parent[v] = v;
    sz[v] = 1;
}

int find__set(int v){
    if(v == parent[v]){
        return v;
    }
    return parent[v] = find__set(parent[v]);
}

void union__sets(int a, int b){
    a = find__set(a);
    b = find__set(b);
    if(a != b){
        if(sz[a] < sz[b]){
            swap(a,b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}


int main(void){
    for(int i = 0; i<N; i++ ){
        make__set(i);
    }

    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }

    bool cycle = false;

    for(auto i : edges){
        int u = i[0];
        int v = i[1];
        int x = find__set(u);
        int y = find__set(v);

        if(x == y){
            cycle = true;
        }else{
            union__sets(u,v);
        }
    }

    if(cycle){
        cout<<"Cycle is present";
    }else{
        cout<<"Cycle is not present";
    }

    return 0;
}

/**
 * Sample Output 
 * 
 *  4 4
    0 1
    1 2
    2 3
    3 0
    Cycle is present
 * 
 * */ 