#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
	string s;
	cin >> n >> s;
	bool vis[26] {};
	int prev = -1;
	for(int i = 0; i < n; i++) {
		int x = s[i] - 'A';
		if(vis[x] && prev != x) {
			cout << "NO" << endl;
			return;
		}
		vis[x] = true;
		prev = x;
	}
	cout << "YES" << endl;
}
int main (void){
    int T;
    cin>>T;
    while (T--)
    {
      solve();
    }   
    return 0;
}