#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        map<char,int> mp2;
        int res=0;
        for(char ch:s)mp2[ch]++;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            mp2[s[i]]--;
            if(mp2[s[i]]==0)mp2.erase(s[i]);
            res=max(res,int(mp.size()+mp2.size()));
        }
        cout<<res<<endl;

    }
}