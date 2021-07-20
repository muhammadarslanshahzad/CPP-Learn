 /*
 ----------------------- Day 72 ----------------------
 ----- Hashing--Top k most frequent element      ----------
 --- Date: 19.07.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define setBits(x) builtin_popcount(x)

int main(void){

    int n, k;
    cin>>n>>k;

    vi a(n);

    rep(i,0,n)
    {
        cin>>a[i];
    }

    map<int, int> freq;

    rep(i,0,n){
        int pSize = freq.size();
        if(freq[a[i]] == 0 && pSize ==k){
            break;
        }
        freq[a[i]]++;
    }

    vii ans;

    map<int, int> :: iterator it;
    for(it= freq.begin(); it!= freq.end();it++){
        if(it->second !=0){
            pii p;
            p.first =it->second;
            p.second = it->first;
            ans.push_back(p);
        }
    }
    sort(ans.begin(), ans.end(), greater<pii>());

    vii :: iterator it1;
    for(it1 = ans.begin(); it1!= ans.end(); it1++){
        cout<<it1->second<<" "<<it1->first<<endl;
    }
    
    return 0;
}

/**
 * Sample Output 
 * 
 *  6 2
 *  1
 *  2
 *  2
 *  2
 *  3
 *  1
 *  2 3
 *  1 1
 * 
 * */ 