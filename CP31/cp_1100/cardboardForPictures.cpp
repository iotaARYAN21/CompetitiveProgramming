#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(vector<ll>& arr,ll mid,ll c){
    ll res=0;
    for(ll elt:arr){
        ll x = (elt+2*1LL*mid);
        ll sq = x*x;
        if(x>sqrt(c))return c+1;
        if(res>c-sq)return c+1;
        res+=sq;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        ll s=1;
        ll e = c;
        ll res=0;
        while(s<=e){
            ll mid = s+(e-s)/2;
            ll ans = solve(arr,mid,c);
            if(ans==c){
                res=mid;
                break;
            }
            else if(ans>c)e=mid-1;
            else s=mid+1;
        }
        cout<<res<<endl;
    }
}