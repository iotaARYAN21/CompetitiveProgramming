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
        int open = n/2;
        map<int,bool> vis;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                j=i;
                while(j<n && (s[j]=='(' || vis[j])){
                    j++;
                }
                if(j<n){
                    vis[j]=1;
                    open--;
                }
            }
        }
        cout<<open<<endl;
    }
}