#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x==0){ // never executed according to the limits of x
            cout<<0<<endl<<0<<endl;
        }
        else if(x<k || x%k!=0){ // dont write x%k==1 as modulo is either zero or non zero
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{ // x>=k && x%k==0
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
}