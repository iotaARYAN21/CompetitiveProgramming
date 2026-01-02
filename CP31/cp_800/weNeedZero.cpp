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
        int xr=0;
        for(int elt:a)xr^=elt;
        if(n%2==0){
            if(xr==0)cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<xr<<endl;
        }
    }
}