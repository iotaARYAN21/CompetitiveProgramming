#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> freq(26,0);
        for(char ch:s)freq[ch-'a']++;
        bool flag=true;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(freq[i]!=0 && freq[j]!=0 && abs(freq[i]-freq[j])>1){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}