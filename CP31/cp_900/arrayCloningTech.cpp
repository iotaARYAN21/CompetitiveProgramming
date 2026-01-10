#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int> count;
        for(int elt:a)count[elt]++;
        int mx=1;
        for(auto it:count)mx=max(mx,it.second);
        int cnt=0;
        while(mx<n){
            cnt+=(1+min(mx,n-mx));
            mx+=min(mx,n-mx);
        }
        cout<<cnt<<endl;
    }
}