#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n*k);
        for(int i=0;i<n*k;i++)cin>>a[i];
        int i=n*k;
        long long sum=0;
        while(k--){
            // cout<<a[i]<<" ";
            i=i-(n/2+1);  // how this formula obtained
            sum+=a[i];
            // i-=(n-1);
        }
        cout<<sum<<endl;
    }
}