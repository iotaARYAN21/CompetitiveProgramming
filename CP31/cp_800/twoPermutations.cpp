#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && a==b)cout<<"Yes\n";
        else{
            int mid = n-(a+b);
            if(mid<=1)cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}