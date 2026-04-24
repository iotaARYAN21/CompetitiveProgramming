#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> a,b,c;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            a.push_back({e,i});
        }
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            b.push_back({e,i});
        }
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            c.push_back({e,i});
        }
        sort(a.begin(),a.end(),greater<pair<ll,ll>>());
        sort(b.begin(),b.end(),greater<pair<ll,ll>>());
        sort(c.begin(),c.end(),greater<pair<ll,ll>>());
        ll res=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second){
                        res=max(res,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
}