#include<bits/stdc++.h>
using namespace std;
bool isPal(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        // if(k==0){
        //     if(isPal(s))cout<<"YES\n";
        //     else cout<<"NO\n";
        // }
        // else if(n-k==1)cout<<"YES\n";
        // else{
            int cnt=0;
            map<char,int> freq;
            for(char elt:s)freq[elt]++;
            bool single = false;
            for(auto it:freq){
                cnt+=it.second;
                if(it.second%2){
                    cnt--;
                    single=true;
                }
            }
            if(cnt>=n-k)cout<<"YES\n";
            else if(single && cnt+1>=n-k)cout<<"YES\n";
            else cout<<"NO\n";
        // }
    }
}