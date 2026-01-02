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
        unordered_map<int,int> vis;
        for(int elt:a)vis[elt]++;
        if(vis.size()<=2){
            if(a.size()>2){
                if(vis.size()==2){
                    int e1=INT_MIN,e2=INT_MIN;
                    for(auto it:vis){
                        if(e1==INT_MIN)e1=it.first;
                        else if(e2==INT_MIN)e2=it.first;
                    }
                    if(abs(vis[e1]-vis[e2])==1 || abs(vis[e1]-vis[e2])==0)cout<<"Yes\n";
                    else cout<<"No\n";
                }
                else cout<<"Yes\n";
            }
            else cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
}