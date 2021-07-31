 /*
 ----------------------- Day 84 ----------------------
 ----- Graph __ Adjacency Matrix    ----------
 --- Date: 31.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vii vector<pii>
#define vvi vector<vi>
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define setBits(x) builtin_popcount(x)

int main(void){

    int n, m;
    cin>>n>>m;

    vvi adjm(n+1, vi(n+1,0));

    rep(i,0,m){
        int x,y;
        cin >>x>>y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
        
    }

    cout<<"adjacency matrix of above grraph is given by : "<<endl;

    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
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
    adjacency matrix of above grraph is given by : 
    0 1 1 0 0 0 0
    1 0 0 1 1 1 1
    1 0 0 0 0 0 1
    0 1 0 0 0 0 0
    0 1 0 0 0 0 0
    0 1 0 0 0 0 0
    0 1 1 0 0 0 0
 * 
 * */ 