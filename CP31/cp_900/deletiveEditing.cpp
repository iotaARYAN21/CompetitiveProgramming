#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n = s.length();
        int m = t.length();
        int i=n-1,j=m-1;
        // bool flag=true;
        unordered_map<char,bool> vis;
        while(i>=0 && j>=0){
            if(s[i]==t[j]){
                if(vis[s[i]]){
                    // flag=false;
                    break;
                }
                else {
                    i--;
                    j--;
                }
            }
            else{
                vis[s[i]]=true;
                i--;
            }
        }
        if(j<0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}