#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> wt(n);
        for(ll &x:wt)cin>>x;
        ll i=0,j=n-1;
        ll left=wt[i];
        ll right=wt[j];
        ll total =0;
        while(i<j){
            if(left<right){
                i++;
                left+=wt[i];
            }
            else if(left>right){
                j--;
                right+=wt[j];
            }
            else{
                total=(i+1 + n-1-j+1);
                i++;
                left+=wt[i];
            }
        }
        cout<<total<<endl;
    }
}