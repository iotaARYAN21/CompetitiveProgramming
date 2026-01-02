#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        if(n%2==0)cout<<"YES\n";
        else{ // n is odd
            if(k%2==0){
                cout<<"NO\n"; // using two even num we cannot make odd num
            }
            else{
                // k is odd
                cout<<"YES\n";
                // NOTE if k>n then NO but according to condition given it is not possible
                // as we can fix count of 2 such that the rem number is div by k
            }
        }

        // if(n%2==0 || n%k==0)cout<<"YES\n";
        // else{
        //     bool found = false;
        //     while(n>0){
        //         if(n%2==0){
        //             found = true;
        //             cout<<"YES\n";
        //             break;
        //         }
        //         else{
        //             n-=k;
        //         }
        //     }
        //     if(!found)cout<<"NO\n";
        // }


        // int k_limit = n/k;
        // int two_limit = n/2;
        // bool found = false;
        // for(int i=0;i<=two_limit;i++){
        //     bool done = false;
        //     for(int j=0;j<=k_limit;j++){
        //         if(2*i + k*j == n){
        //             cout<<"YES\n";
        //             done = true;
        //             break;
        //         }
        //     }
        //     if(done){
        //         found = true;
        //         break;
        //     }
        // }
        // if(!found){
        //     cout<<"NO\n";
        // }
    }
}