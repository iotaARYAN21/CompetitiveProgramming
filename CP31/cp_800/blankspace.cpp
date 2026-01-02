#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int mx=0;
        int i=0,j=0;
        while(j<n){
            if(a[j]==0){
                j++;
                mx=max(mx,j-i);
            }
            else{
                while(j<n && a[j]==1)j++;
                i=j;
            }
        }
        cout<<mx<<endl;
    }
}