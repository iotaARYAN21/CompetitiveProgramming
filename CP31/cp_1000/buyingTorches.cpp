#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long diff = x-1;
        long long last= k+(k*y);
        long long sum = ((last-1+diff-1)/(diff));
        sum+=k;
        cout<<sum<<endl;
    }
}
/*
Never use ceil(double) for integer division in CP.
Always use:

(a + b - 1) / b
*/