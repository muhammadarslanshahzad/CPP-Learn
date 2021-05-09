#include <bits/stdc++.h>
using namespace std;
using ll =long long;

void solve(int test){
     ll n;
    cin >> n;
    int ans = 0;
    for (char c = '1'; c <= '9'; ++c) {
        for (int ln = 1; ln <= 9; ++ln) {
            ll x = stoll(string(ln, c));
            if (x <= n)
                ++ans;
        }
    }
    cout << ans << '\n';
}
int main(void){
    int T;
    cin>>T;
    while (T--)
    {
        solve(T);
    }
    return 0 ;
}