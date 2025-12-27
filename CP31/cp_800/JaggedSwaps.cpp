#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int mn = INT_MAX;
        for(int elt:a)mn=min(mn,elt);
        if(mn!=a[0])cout<<"NO\n";
        else cout<<"YES\n";
    }
}