#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<pair<int,int>> diff;
        for(int i=0;i<n;i++){
            diff.push_back({a[i]-x,a[i]+x});
        }
        long long cnt=0;
        int l = diff[0].first,r=diff[0].second;
        for(int i=1;i<n;i++){
            if(diff[i].second<l || diff[i].first>r){
                cnt++;
                l=diff[i].first;
                r=diff[i].second;
            }
            else{
                l=max(l,diff[i].first);
                r=min(r,diff[i].second);
            }
        }
        cout<<cnt<<endl;
    }
}