#include<bits/stdc++.h>
using namespace std;
bool solve(unsigned long long n){
    string s = to_string(n);
    // set<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && n%(s[i]-'0')!=0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        unsigned long long res=-1;
        for(unsigned long long i=n;i<=n+2520;i++){
            if(solve(i)){
                res=i;
                break;
            }
        }
        cout<<res<<endl;
    }
}