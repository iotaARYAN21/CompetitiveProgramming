#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> b,c;
        int mx=INT_MIN;
        for(int elt:a)mx=max(mx,elt);
        for(int elt:a){
            if(elt!=mx)b.push_back(elt);
            else c.push_back(elt);
        }
        if(b.size()==0)cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int elt:b)cout<<elt<<" ";
            cout<<endl;
            for(int elt:c)cout<<elt<<" ";
            cout<<endl;
        }
    }
}