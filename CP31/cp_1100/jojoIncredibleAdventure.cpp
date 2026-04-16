#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n =s.length();
        ll ones=0;
        string t = s+s;
        ll curr=0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='1'){
                curr++;
            }
            else{
                ones=max(ones,curr);
                curr=0;
            }
        }
        ones=max(ones,curr);
        if(ones==2*1LL*n){
            cout<<n*1LL*n<<endl;
            continue;
        }
        ll res=0;
        ll x=ones;
        ll y=1;
        while(x>0){
            res=max(res,x*y);
            x--;
            y++;
        }
        cout<<res<<endl;
    }
}