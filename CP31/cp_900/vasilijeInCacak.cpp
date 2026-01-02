#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long x;
        cin>>n>>k>>x;
        
        long long low = 1LL * k * (k+1)/2;
        long long high = 1LL * n*(n+1)/2 - 1LL * (n-k) * (n-k+1)/2;
        if(x>=low && x<=high)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}