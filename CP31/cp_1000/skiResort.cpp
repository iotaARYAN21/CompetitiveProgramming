#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int i=0,j=0;
        long long cnt=0;
        while(j<n){
            if(a[j]<=q)j++;
            else{
                if((j-i)>=k){
                    int val = (j-i)-k+1;
                    long long num = (val*1LL*(val+1))/2;
                    cnt+=num;
                }
                j++;
                i=j;
            }
        }
        if((j-i)>=k){
            int val = (j-i)-k+1;
            long long num = (val*1LL*(val+1))/2;
            cnt+=num;
        }
        cout<<cnt<<endl;
    }
}