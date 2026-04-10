#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(vector<int> a1,vector<int>a2,int n){
    ll cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(a1[i]^a2[n-i-1]);
    }
    return cnt;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cin>>arr[i][j];
        }
        ll cnt=0;
        ll i=0,j=n-1;
        while(i<=j){
            ll res = solve(arr[i],arr[j],n);
            if(i!=j)cnt+=res;
            else cnt+=(res/2);
            i++;
            j--;
        }
        // cout<<cnt<<endl;
        if(cnt==k)cout<<"YES\n";
        else if(cnt<k && (k-cnt)%2==0)cout<<"YES\n";
        else if(cnt<k && (k-cnt)%2==1){
            if(n%2==1){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}