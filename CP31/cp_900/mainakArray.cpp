#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int op1=INT_MIN;
        int op2=INT_MIN;
        int op3=INT_MIN;
        if(n==1)cout<<0<<endl;
        // else if(n==2)cout<<a[1]-a[0]<<endl; // if [2,1] then expected 1 but gives -1
        else{
            for(int i=0;i<n-1;i++)op1=max(op1,a[i]-a[i+1]);

            for(int i=1;i<n;i++)op2=max(op2,a[i]-a[0]);

            for(int i=0;i<n-1;i++)op3=max(op3,a[n-1]-a[i]);

            cout<<max(op1,max(op2,op3))<<endl;
        }
    }
}