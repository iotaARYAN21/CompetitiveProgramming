#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(51,INT_MAX);
    map<int,bool> vis;
    int ind=1;
    for(int i=0;i<n;i++){
        int col;
        cin>>col;
        if(vis.find(col)==vis.end()){
            arr[col]=ind;
            vis[col]=1;
        }
        ind++;
    }
    while(q--){
        int x;
        cin>>x;
        int ans = arr[x];
        for(int i=0;i<=50;i++){
            if(arr[i]<ans){
                arr[i]+=1;
            }
        }
        arr[x]=1;
        cout<<ans<<" ";
    }
    cout<<endl;
}