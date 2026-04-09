#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char> distinct;
        set<char> window;
        for(char ch:s)distinct.insert(ch);
        int n = distinct.size();
        int i=0,j=0;
        bool flag = true;
        while(j<s.length()){
            if(j-i+1<=n){
                window.insert(s[j]);
                j++;
            }
            else{
                if(window.size()!=n){
                    flag=false;
                    break;
                }
                window.erase(s[i]);
                i++;
                // j++;
            }
        }
        if(window.size()!=n){
            flag=false;
            // break;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}