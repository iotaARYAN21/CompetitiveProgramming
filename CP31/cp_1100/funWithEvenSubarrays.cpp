#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll &x:a)cin>>x;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll cnt=0;
        ll i=n-1;
        ll elt = a[n-1];
        while(i>=0){
            while(i>=0 && a[i]==elt)i--;
            if(i>=0){
                if(i+1>=(n-1-i)){
                    i = i-(n-1-i);
                    cnt++;
                }
                else{
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}