#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<ll,ll>> arr(n);
        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            arr[i]=make_pair(x,y);
        }
        if(a<=k && b<=k){
            cout<<0<<endl;
            continue;
        }
        ll op1 = abs(arr[a-1].first-arr[b-1].first) + abs(arr[a-1].second-arr[b-1].second);
        if(k==0){
            cout<<op1<<endl;
            continue;
        }
        auto start = arr[a-1];
        auto end = arr[b-1];
        ll diff = LLONG_MAX;
        ll diff2 = LLONG_MAX;
        pair<ll,ll> mc1,mc2;
        for(int i=0;i<k;i++){
            if(start!=arr[i]){
                ll temp =abs(arr[i].first-start.first)+abs(arr[i].second-start.second);
                if(temp < diff){
                    diff = temp;
                    // cout<<diff<<endl;
                    mc1 = arr[i];
                }
            }
            if(end!=arr[i]){
                ll temp =abs(arr[i].first-end.first)+abs(arr[i].second-end.second);
                if(temp < diff2){
                    diff2 = temp;
                    mc2 = arr[i];
                }
            }
        }
        if(a<=k){
            ll op2 = 0+diff2;
            cout<<min(op1,op2)<<endl;
        }
        else if(b<=k){
            ll op2 = diff+0;
            cout<<min(op1,op2)<<endl;
        }
        else{
            ll op2 = diff+0+diff2;
            cout<<min(op1,op2)<<endl;
        }
    }
}