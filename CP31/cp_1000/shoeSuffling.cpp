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
        bool possible=true;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                // cout<<-1<<endl;
                possible=false;
                break;
            }
            
        }
        if(!possible){
            cout<<-1<<endl;
            continue;
        }
        vector<int> res(n);
        for(int i=0;i<n;i++)res[i]=i+1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                swap(res[i],res[i+1]);
            }
            else{
                continue;
            }
        }
        for(int elt:res)cout<<elt<<" ";
        cout<<endl;
    }
}