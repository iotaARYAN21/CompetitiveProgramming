#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long xr = 0;
        // for(int i=1;i<a;i++)xr^=i;
        if(((a-1)%4)==0)xr=a-1;
        else if(((a-1))%4==1)xr=1;
        else if(((a-1))%4==2)xr=a;
        else if(((a-1))%4==3)xr=0;
        if(xr==b)cout<<a<<endl;
        else{
            if((xr^b)==a)cout<<a+2<<endl;
            else cout<<a+1<<endl;
        }
    }
}