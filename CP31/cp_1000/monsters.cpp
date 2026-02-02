#include<bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        else return a.first<b.first;
    }
};
bool comp(vector<int> a,vector<int> b){
    if(a[0]!=b[0])return a[0]<b[0];
    else if(a[1]!=b[1])return a[1]>b[1];
    else return a[2]<b[2]; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        
        vector<pair<int,int>> hp;
        for(int i=0;i<n;i++){
            if(a[i]%k!=0)hp.push_back({a[i]%k,-i});
            else hp.push_back({k,-i});
        }
        sort(hp.begin(),hp.end());
        for(int i=n-1;i>=0;i--){
            cout<<(-hp[i].second)+1<<" ";
        }
        cout<<endl;
    }
}