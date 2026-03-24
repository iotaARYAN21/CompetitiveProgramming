#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll &elt:a)cin>>elt;
        sort(a.begin(),a.end());
        vector<ll> pref(n,0);
        pref[0]=a[0];
        for(ll i=1;i<n;i++)pref[i]=pref[i-1]+a[i];
        ll res=0;
        res=pref[n-1]-pref[2*k-1];
        ll ind = 2*k-1;
        ll cnt=1;
        while(k--){
            ll temp=0;
            if(ind-2>=0)temp=pref[ind-2];
            ll t = pref[n-1]-temp-(pref[n-1]-pref[n-1-cnt]);
            res=max(res,t);
            ind-=2;
            cnt++;
        }
        cout<<res<<endl;
    }
}