#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll &x:a)cin>>x;
        sort(a.begin(),a.end()); // if not want to use sorting then first mark all elements visited and then traverse to find the diff
        map<ll,bool> vis;
        bool flag = false;
        for(ll i=0;i<n;i++){
            if(vis.find(a[i]-k)!=vis.end()){
                flag=true;
                break;
            }
            vis[a[i]]=1;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}