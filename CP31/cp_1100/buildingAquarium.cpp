#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(vector<ll> a,ll h){
    ll sum=0;
    for(auto e:a){
        sum+=(h-min(h,e));
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll res=-1;
        ll l=1;
        ll r = *max_element(a.begin(),a.end())+x;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(solve(a,mid)<=x){
                res=mid;
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        cout<<res<<endl;
    }
}