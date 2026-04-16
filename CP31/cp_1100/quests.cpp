#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];
        ll res=a[0]+(k-1)*b[0];
        ll sum=0;
        ll mx=0;
        for(ll i=0;i<min(n,k);i++){
            sum+=a[i];
            mx=max(mx,b[i]);
            ll rem=k-i-1;
            res=max(res,sum+mx*rem);
        }
        cout<<res<<endl;
    }
}