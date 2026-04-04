#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll binExpo(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b%2!=0){
            res=(res*a)%mod;
            b-=1;
        }
        else{
            a = (a*a)%mod;
            b/=2;
        }
    }
    return (res)%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        // cout<<binExpo(n,2)<<endl;
        ll op1 = (((n*(n+1))%mod)*(2*n+1))%mod;
        ll op1_res = (op1 * binExpo(6*1LL,mod-2))%mod;

        ll op2 = ((((n-1)*n)%mod)*(2*n-1))%mod;
        ll op2_res = (op2 * binExpo(6*1LL,mod-2))%mod;

        ll op3 = (n*(n-1))%mod;
        ll op3_res =  (op3 * binExpo(2*1LL,mod-2))%mod;

        ll res= ((op1_res+op2_res)%mod + op3_res)%mod;
        cout<<(2022*res)%mod<<endl;


        // if(n==1000000000){
        //     cout<<999589541<<endl;
        //     continue;
        // }
        // ll sum=1;
        // ll x=1;
        // ll y=1;
        // while(x!=n && y!=n){
        //     ll op1 = ((x+1)*y)%mod;
        //     ll op2 = ((x+1)*(y+1))%mod;
        //     sum = (sum + (op1+op2)%mod)%mod;
        //     x=x+1;
        //     y=y+1;
        // }
        // sum = (sum*2022)%mod;
        // cout<<sum<<endl;
    }
}