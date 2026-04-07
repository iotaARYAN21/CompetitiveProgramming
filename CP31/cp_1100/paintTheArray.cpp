#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);;
        for(ll &x:a)cin>>x;
        bool evenIndices=true;
        bool oddIndices = true;
        ll gEven = a[0];
        ll gOdd = a[1];
        for(ll i=0;i<n;i+=2){
            gEven=__gcd(gEven,a[i]);
        }
        for(ll i=1;i<n;i+=2){
            gOdd = __gcd(gOdd,a[i]);
        }
        for(ll i=1;i<n;i+=2){
            if(a[i]%gEven == 0){
                evenIndices=false;
                break;
            }
        }
        for(ll i=0;i<n;i+=2){
            if(a[i]%gOdd==0){
                oddIndices=false;
                break;
            }
        }
        if(evenIndices)cout<<gEven<<endl;
        else if(oddIndices)cout<<gOdd<<endl;
        else cout<<0<<endl;
    }
}