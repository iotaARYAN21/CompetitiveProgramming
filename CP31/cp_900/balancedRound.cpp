#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<long long> diff;
        for(int i=0;i<n-1;i++)diff.push_back(a[i+1]-a[i]);
        long long cnt=0;
        long long mx=0;
        for(int i=0;i<diff.size();i++){
            if(diff[i]<=k){
                cnt++;
                mx=max(mx,cnt);
            }
            else{
                cnt=0;
            }
        }
        cout<<n-(mx+1)<<endl;
    }
}