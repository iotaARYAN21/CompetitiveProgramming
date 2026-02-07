#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=0;
        int cnt=0;
        int mn=INT_MAX;
        while(j<n){
            if(s[j]=='B')cnt++;
            if(j-i+1<k)j++;
            else{
                int w = k-cnt;
                mn=min(mn,w);
                if(s[i]=='B')cnt--;
                i++;
                j++;
            }
        }
        cout<<mn<<endl;
    }
}