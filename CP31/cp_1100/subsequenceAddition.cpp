#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> c(n);
        for(ll i=0;i<n;i++)cin>>c[i];
        sort(c.begin(),c.end());
        if(c[0]!=1){
            cout<<"NO\n";
            continue;
        }
        else{
            bool flag=true;
            ll prevSum=1;
            for(ll i=1;i<n;i++){
                if(c[i]<=prevSum){
                    prevSum+=c[i];
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}