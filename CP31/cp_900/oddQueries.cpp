#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<unsigned long long> pref(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        pref[0]=a[0];
        for(int i=1;i<n;i++)pref[i]=1LL*pref[i-1]+1LL*a[i];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l-=1;
            r-=1;
            if(l==0){
                unsigned long long sum=1LL*pref[n-1]-1LL*pref[r]+k*1LL*(r-l+1);
                if(sum%2==1)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else{
                unsigned long long sum=1LL*pref[n-1]-(1LL*pref[r]-1LL*pref[l-1])+k*1LL*(r-l+1);
                if(sum%2==1)cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}