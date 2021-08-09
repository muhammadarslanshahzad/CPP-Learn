 /*
 ----------------------- Day 93 ----------------------
 ----- Grapghs __ Spanning Tree     ----------
 --- Date: 09.08.2021---------------------------------
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

void union__set(int a, int b){
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
    for(int i =0; i<N; i++){
        make__set(i);
    }

    int n,m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int u,v,w; 
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }

    sort(edges.begin(), edges.end());
    int cost = 0;
    for(auto i : edges){
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find__set(u);
        int y = find__set(v);

        if(x == y){
            continue;
        }else{
            cout<<u<<" "<<v<<endl;
            cost += w;
            union__set(u,v);
        }
    }

    cout<<cost;

    return 0;
}

/**
 * Sample Output 
 * 
 * 4 16 1
    951 1
    1 2
    4 3
    7
 * */ 