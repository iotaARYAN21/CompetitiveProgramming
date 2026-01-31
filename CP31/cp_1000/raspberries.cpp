#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int d=INT_MAX;
        int evenCount=0;
        for(int elt:a){
            if(elt%2==0)evenCount++;
            if(elt%k!=0)d=min(d,k-(elt%k)); // distance of next multiple of k from elt (this formula not gives 0 if elt==k)
            else d=0;
        }
        if(k!=4){
            cout<<d<<endl;
        }
        else{
            int op;
            if(evenCount>=2)op=0;
            else if(evenCount==1)op=1;
            else op=2;
            cout<<min(d,op)<<endl;
        }
    }
}