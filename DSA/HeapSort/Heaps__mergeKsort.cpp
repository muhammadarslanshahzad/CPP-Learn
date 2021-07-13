 /*
 ----------------------- Day 65 ----------------------
 ----- Heap Merge K sorted Array      ----------
 --- Date: 12.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define repeat(i,x,y) for(int i=x; i<y; i++)
#define pii pair<int, int>
#define vi vector<int>
#define ff first
#define ss second

int main(void){

    int n;
    cin>>n;

    vector<vector<int>> a(n);

    repeat(i,0,n){
        int size;
        cin>>size;

        a[i] = vector<int>(size);
        repeat(j,0,size){
            cin>>a[i][j];
        }
    }

    vector<int> indx(n,0);

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    repeat(i, 0, n){
        pii p;
        p.ff = a[i][0];
        p.ss = i;
        pq.push(p);
    }

    vi ans;

    while(!pq.empty()){
        
        pii x =pq.top();
        pq.pop();

        ans.push_back(x.ff);

        if(indx[x.ss]+1 < a[x.ss].size()){
            pii p ;
            p.ff = a[x.ss][indx[x.ss]+1];
            p.ss =  x.ss;
            pq.push(p);

            indx[x.ss] += 1;
        }
    }

    repeat(i, 0, ans.size()){
        cout<<ans[i]<<endl;
    }
 
    return 0;
}

/**
 * Sample Output 
 * 
 * 
 * */ 