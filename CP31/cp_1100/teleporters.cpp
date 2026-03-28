#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll &x: a)cin>>x;
        for(ll i=0;i<n;i++)b[i]=i+1+a[i];
        sort(b.begin(),b.end());
        ll sum=0;
        ll ans=0;
        while(ans<n){
            if(b[ans]+sum<=c)sum+=b[ans];
            else break;
            ans++;
        }
        cout<<ans<<endl;

    }
}