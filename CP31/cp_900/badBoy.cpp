#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n==1){
            if(m==1)cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
            else if(y==1)cout<<1<<" "<<m<<" "<<1<<" "<<m<<endl;
            else if(y==m)cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
            else{
                cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;
            }
        }
        else if(m==1){
            // cout<<n<<m<<x<<y<<endl;
            if(n==1)cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
            else if(x==1)cout<<n<<" "<<1<<" "<<n<<" "<<1<<endl;
            else if(x==m)cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
            else{
                cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
            }
        }
        else if(y==1)cout<<1<<" "<<m<<" "<<n<<" "<<m<<" "<<endl;
        else if(y==m)cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
        else if(x==1)cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl;
        else if(x==n)cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;
        else cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    }
}