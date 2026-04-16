#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(ll &x:a)cin>>x;
        vector<int> b;
        map<int,bool> vis;
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            if(vis.find(x)==vis.end()){
                vis[x]=1;
                b.push_back(x);
            }
        }
        for(int x:b){
            for(int i=0;i<n;i++){
                if((a[i]%int(pow(2,x)))==0){
                    a[i]+=(1<<(x-1));
                }
            }
        }
        for(auto x:a)cout<<x<<" ";
        cout<<endl;
    }
}