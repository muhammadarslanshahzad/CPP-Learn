#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int r,b,d;
    cin>>r>>b>>d;
    ll minn= min(r,b);
    ll maxx=max(r,b);
    cout<<(minn*(d+1)>=maxx? "YES" :"NO")<<endl;
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        solve();
    }
    return 0;
}