#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll &x:a)cin>>x;
        ll mod=2;
        ll res=0;
        while(1){
            set<ll> st;
            for(ll x:a)st.insert(x%mod);
            if(st.size()==2){
                res=mod;
                break;
            }
            mod*=2;
        }
        cout<<res<<endl;
    }
}