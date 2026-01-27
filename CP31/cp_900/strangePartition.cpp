#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long mx = 0;
        long long mn=0;
        for(int elt:a)mn+=elt;
        mn = ceil((double)mn/(double)x);
        for(int i=0;i<n;i++){
            // cout<<ceil(a[i]/x)<<" ";
            mx+=ceil((double)a[i]/(double)x);
        }
        cout<<mn<<" "<<mx<<endl;
    }
}