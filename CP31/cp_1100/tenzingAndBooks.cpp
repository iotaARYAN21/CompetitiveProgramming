#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(n);
        for(ll &elt:a)cin>>elt;
        for(ll &elt:b)cin>>elt;
        for(ll &elt:c)cin>>elt;
        ll res=0;
        ll tempx = x;
        map<int,bool> vis;
        ll ind = 0;
        while(tempx!=0){
            if((tempx & 1)==1 ){
                vis[ind]=1;
            }
            tempx>>=1;
            ind++;
        }
        for(ll i=0;i<n;i++){
            ll temp=a[i];
            // ll tempx = x;
            bool flag = true;
            ind=0;
            while(temp!=0){
                if((temp&1)==1 && vis.find(ind)==vis.end()){
                    flag=false;
                    break;
                }
                temp>>=1;
                ind++;
            }
            if(!flag)break;
            else{
                res|=a[i];
            }
        }
        for(ll i=0;i<n;i++){
            ll temp=b[i];
            // ll tempx = x;
            bool flag = true;
            ind=0;
            while(temp!=0){
                if((temp&1)==1 && vis.find(ind)==vis.end()){
                    flag=false;
                    break;
                }
                temp>>=1;
                ind++;
            }
            if(!flag)break;
            else{
                res|=b[i];
            }
        }
        for(ll i=0;i<n;i++){
            ll temp=c[i];
            // ll tempx = x;
            bool flag = true;
            ind=0;
            while(temp!=0){
                if((temp&1)==1 && vis.find(ind)==vis.end()){
                    flag=false;
                    break;
                }
                temp>>=1;
                ind++;
            }
            if(!flag)break;
            else{
                res|=c[i];
            }
        }
        if(res==x)cout<<"Yes\n";
        else cout<<"No\n";
    }
}