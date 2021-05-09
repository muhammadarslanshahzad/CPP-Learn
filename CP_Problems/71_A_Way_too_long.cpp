#include <bits/stdc++.h>
using namespace std;

int main(void){
    int T=0;
    cin>>T;
    while (T--)
    {
        
        string a;
        cin>>a;
        int end=a.length()-1, mid=a.length()-2;
        if(a.length()>10){cout<<a[0]<<mid<<a[end]<<endl;}
        else{cout<<a<<endl;;}
    }
    return 0;
}