#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> ans;
        ll cnt=1;
        ans.push_back(l);
        for(ll i=2;i<=n;i++){
            if(l%i==0){
                ans.push_back(l);
                cnt++;
            }
            else{
                ll j = l/i;
                j = (j+1)*i;
                if(j<=r){
                    ans.push_back(j);
                    cnt++;
                }
                else break;
            }
        }
        if(cnt==n){
            cout<<"YES\n";
            for(ll elt:ans)cout<<elt<<" ";
            cout<<endl;
        }
        else cout<<"NO\n";
    }
    
}