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
        int f,s;
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(mn>a[i+1]-a[i]){
                mn=a[i+1]-a[i];
                f=a[i],s=a[i+1];
            }
        }
        if(f<=s)cout<<(s-f)/2 +1<<endl;
        else cout<<0<<endl;
        // int cnt=0;
        // while(f<=s){
        //     f++;
        //     s--;
        //     cnt++;
        // }
        // cout<<cnt<<endl;
    }
}