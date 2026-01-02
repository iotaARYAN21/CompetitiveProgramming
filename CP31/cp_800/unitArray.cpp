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
        int pos = 0, neg=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)pos++;
            else neg++;
        }
        if(pos >= neg){
            if(neg%2==0)cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            int cnt=0;
            if(neg%2!=0){
                cnt=1;
                neg--;
                pos++;
            }
            while(pos<neg){
                neg-=2;
                pos+=2;
                cnt+=2;
            }
            cout<<cnt<<endl;
        }
    }
}