#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int n;
vector<int> a;
int main(){	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		if(!count(a.begin(),a.end(),tmp))
		a.pb(tmp);
	}
	sort(a.begin(),a.end());
	if(a.size()==1) cout<<"NO";
	else
	cout<<a[1];	
    return 0;
}