#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(a<b)swap(a,b);
        long long res=a-b;
        long long steps = min(b%res,res-(b%res));
        cout<<res<<" "<<steps<<endl;    
    }
}