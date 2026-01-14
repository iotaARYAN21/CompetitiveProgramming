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
        long long pdt = a[0];
        for(int i=0;i<n;i++)pdt = (pdt&a[i]);
        cout<<pdt<<endl;
    }    
    // cout<<(3 & 11 & 3 & 7)<<endl;
}