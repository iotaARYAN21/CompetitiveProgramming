#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x ;
        long long n;
        cin>>x>>n;
        if(x%2==0){
            long long d ;
            if(n%4 == 0)d=0;
            else if(n%4==1)d=-n;
            else if(n%4==2)d=1;
            else if(n%4==3)d=n+1;

            cout<<x+d<<endl;
        }
        else{
            long long d;
            if(n%4 == 0)d=1;
            else if(n%4==1)d=n+1;
            else if(n%4 == 2)d=0;
            else if(n%4==3)d=-n;
            cout<<(x-1)+d<<endl;
        }
    }
}