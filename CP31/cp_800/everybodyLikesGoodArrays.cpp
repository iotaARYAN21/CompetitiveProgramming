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
        int cnt=0;
        int i=0,j=1;
        while(j<n){
            if((a[j]%2==0 && a[j-1]%2==0) || (a[j]%2==1 && a[j-1]%2==1))j++;
            else{
                cnt++;
                i=j++;
            }
        }
        cnt++;
        cout<<n-cnt<<endl;
    }
}