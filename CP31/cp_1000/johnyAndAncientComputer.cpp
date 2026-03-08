#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long mn = min(a,b);
        long long mx = max(a,b);
        long long cnt=0;
        while(mn<mx){
            mn*=2;
            cnt++;
        }
        if(mn>mx)cout<<-1<<endl;
        else{
            long long res=0;
            // cnt contains count of 2s 
            res+=(cnt/3); // cnt of x*8 operations
            cnt = cnt%3;
            res+=(cnt/2); // cnt of x*4 operations
            cnt=cnt%2;
            res+=(cnt);   // cnt of x*2 operations
            cout<<res<<endl;
        }
    }
}