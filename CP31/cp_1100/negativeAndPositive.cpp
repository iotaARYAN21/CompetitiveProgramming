#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll cnt=0;
        ll sum=0;
        ll mn=LLONG_MAX;
        for(ll &x:a){
            cin>>x;
            if(x<0)cnt++;
            sum+=(abs(x));
            if(mn>abs(x))mn=abs(x);
        }
        if(cnt%2==0)cout<<sum<<endl;
        else cout<<sum-mn-mn<<endl;
    }
}