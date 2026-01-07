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
        // mex{0,1,2,3,4} => 5
        int l=-1,r=-1;
        // find the first occurence of non zero and last occurence of non zero
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                if(l==-1 && r==-1)l=r=i;
                else{
                    r=i;
                }
            }
        }
        if(l==-1 && r==-1){
            // all are zero
            cout<<0<<endl;
        }
        else{
            bool nonZeroTogether=true;
            for(int i=l;i<=r;i++){
                if(a[i]==0){
                    // all non zero not together
                    cout<<2<<endl;
                    nonZeroTogether=false;
                    break;
                }
            }
            if(nonZeroTogether)cout<<1<<endl;
        }
    }
}