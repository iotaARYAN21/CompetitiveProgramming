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
        for(ll &elt:a)cin>>elt;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll i=0,j=n-1;
        vector<ll> diff;
        while(i<j){
            diff.push_back(abs(a[i]-a[j]));
            i++;
            j--;
        }
        ll g = diff[0];
        for(auto elt:diff)g=__gcd(g,elt);
        cout<<g<<endl;
    }
}