#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        // map<ll,bool> ax;
        // map<ll,bool> ay;
        // ll i=1;
        // while(i*x<=n){
        //     ax[i*x]=true;
        //     i++;
        // }
        // i=1;
        // while(i*y<=n){
        //     if(ax.find(i*y)==ax.end()){
        //         ay[i*y]=true;
        //     }
        //     else{
        //         ax.erase(i*y);
        //     }
        //     i++;
        // }
        ll cx=floor(n/(1.0*x)) - floor(n/(1.0*lcm(x,y)));
        ll cy =floor(n/(1.0*y))- floor(n/(1.0*lcm(x,y)));
        ll s = n;
        ll e = n-cx+1;
        ll sum=0;
        sum+=((cx)*(2*n-cx+1))/2;
        sum-=(cy*(cy+1))/2;
        cout<<sum<<endl;
    }
}