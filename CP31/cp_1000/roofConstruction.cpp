#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // find the msb 
        int msb = 0;
        int elt=n-1;
        while(elt!=0){
            msb++;
            elt>>=1;
        }
        msb--;
        // cout<<msb<<endl;
        int mx=(1<<msb);
        // cout<<mx<<endl;
        for(int i=n-1;i>=mx;i--)cout<<i<<" ";
        for(int i=0;i<mx;i++)cout<<i<<" ";
        cout<<endl;
    }
}