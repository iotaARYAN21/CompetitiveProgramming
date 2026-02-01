#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        set<int> st;
        for(int elt :a)st.insert(elt);
        for(int elt:b)st.insert(elt);
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int elt=a[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(elt==a[i]){
                cnt++;
            }
            else{
                mp1[elt]=max(mp1[elt],cnt);
                cnt=1;
                elt=a[i];
            }
        }
        mp1[elt]=max(mp1[elt],cnt);
        elt=b[0];
        cnt=1;
        for(int i=1;i<n;i++){
            if(elt==b[i])cnt++;
            else{
                mp2[elt]=max(mp2[elt],cnt);
                cnt=1;
                elt=b[i];
            }
        }
        mp2[elt]=max(mp2[elt],cnt);
        int res=1;
        for(auto it:st){
            res=max(res,mp1[it]+mp2[it]);
        }
        cout<<res<<endl;
    }
}