#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x:a)cin>>x;
        int res=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                if(res==-1)res=a[i];
                else res=res&a[i];
            }
        }
        cout<<res<<endl;
    }
}