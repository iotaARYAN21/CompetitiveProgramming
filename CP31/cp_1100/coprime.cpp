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
        vector<int> ind(1001,-1);
        for(int i=0;i<n;i++){
            ind[a[i]]=i+1;
        }
        int res=-1;
        for(int i=1;i<1001;i++){
            for(int j=1;j<1001;j++){
                if(ind[i]>=0 && ind[j]>=0){
                    if(__gcd(i,j)==1){
                        res=max(res,ind[i]+ind[j]); 
                    }
                }
            }
        }
        cout<<res<<endl;
    }
}