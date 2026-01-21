#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long r=1;
        for(r=2;r<=n;r++){
            if(n%r!=0)break;
        }
        cout<<r-1<<endl;
    }
}