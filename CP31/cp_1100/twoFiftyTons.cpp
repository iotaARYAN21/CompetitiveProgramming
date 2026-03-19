#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long solve(int k,int n,vector<long long>& arr){
    long long mx=0;
    long long mn=arr[n-1];
    for(int i=0;i<n;i+=k){
        if(i==0){
            mn=arr[i+k-1];
            mx=arr[i+k-1];
        }
        else{
            mn=min(mn,arr[i+k-1]-arr[i-1]);
            mx=max(mx,arr[i+k-1]-arr[i-1]);
        }
    }
    return mx-mn;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long res=0;
        vector<long long> pref(n,1LL*0);
        pref[0]=1LL*a[0];
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+1LL*a[i];
        for(int i=1;i<n;i++){
            if(n%i==0){
                res=max(res,solve(i,n,pref));
            }
        }
        cout<<res<<endl;
    }
}