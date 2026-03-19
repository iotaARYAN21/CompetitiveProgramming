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
        long long sum=a[0];
        long long mx=a[0];
        for(int i=1;i<n;i++){
            if(a[i-1]%2==0){
                // even 
                if(a[i]%2==0){
                    mx=max(mx,1LL*a[i]);
                    sum=a[i];
                }
                else{
                    sum+=a[i];
                    if(sum<a[i])sum=a[i];
                    mx=max(mx,sum);
                }
            }
            else{
                // odd
                if(a[i]%2==0){
                    sum+=a[i];
                    if(sum<a[i])sum=a[i];
                    mx=max(mx,sum);
                }
                else{
                    mx=max(mx,1LL*a[i]);
                    sum=a[i];
                }
            }
        }
        cout<<mx<<endl;
    }
}