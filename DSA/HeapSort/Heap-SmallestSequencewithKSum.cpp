 /*
 ----------------------- Day 66 ----------------------
 ----- Heap - Smallest Sequnce with sum K       ----------
 --- Date: 12.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)

int main(void){

    int n, j;
    cin>> n>> j;

    vi a(n);

    rep(i,0,n)
        cin>> a[i];
    
    priority_queue<int, vi> pq;

    rep(i,0,n){
        pq.push(a[i]);
    }

    int sum = 0;
    int cnt = 0;

    while(!pq.empty()){
        sum += pq.top();
        pq.pop();

        cnt++;

        if(sum >= j){
            break;
        }
    }

    if(sum < j){
        cout<<"-1"<<endl;
    }
    else{
        cout<<cnt<<endl;
    }

    return 0;
}

/**
 * Sample Output 
 * 
 *  5 12
 *  1 1 3 2 8
 *  3
 * 
 * */ 