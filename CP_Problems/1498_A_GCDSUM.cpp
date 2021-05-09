//header files
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
//
ll gcd(ll n, ll s) {
	return s == 0 ? n : gcd(s, n % s);
}

//sum
ll sum (ll n){
    int res=0;
    while (n>0)
    { 
        res += n%10;
        n /= 10;
    }    
    return res;
}
//chk function
void chk(){
    ll n;
    cin>>n;
    while (gcd(n, sum(n))==1)
    { 
        n++;
    }
    cout<<n<<endl;
    
}

//main
int main(void){
    int T;
    cin>>T;
    while (T--)
    {
        chk();
    }
    
}