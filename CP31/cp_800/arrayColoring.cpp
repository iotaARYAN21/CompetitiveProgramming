#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int sum=0;
        for(int elt:a)sum+=elt;
        if(sum%2==1)cout<<"NO\n";
        else{
            bool flag = false;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((a[i]+a[j])%2==0){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}