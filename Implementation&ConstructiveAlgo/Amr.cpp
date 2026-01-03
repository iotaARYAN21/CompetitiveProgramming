#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i+1});
    }
    sort(v.begin(),v.end());
    vector<pair<int,int>> res;
    int mx=k;
    for(int i=0;i<n;i++){
        if(v[i].first <= mx){
            mx-=v[i].first;
            res.push_back(v[i]);
        }
        else{
            break;
        }
    }
    cout<<res.size()<<endl;
    for(auto elt:res){
        cout<<elt.second<<' ';
    }
    return 0;
}