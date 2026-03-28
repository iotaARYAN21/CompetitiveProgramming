#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll totalSum=0;
        for(ll &x:a){
            cin>>x;
            totalSum+=x;
        }
        ll currSum=0;
        ll ans=1;
        for(ll i=0;i<n-1;i++){
            currSum+=a[i];
            // totalSum-=currSum;
            ans=max(ans,__gcd(currSum,totalSum-currSum));
        }
        cout<<ans<<endl;
    }
}