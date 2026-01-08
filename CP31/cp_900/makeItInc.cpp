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
        if(n==1)cout<<0<<endl;
        else{
            bool inc = true;
            for(int i=0;i<n-1;i++){
                if(a[i]>=a[i+1]){
                    inc=false;
                    break;
                }
            }
            if(inc){
                cout<<0<<endl;
            }
            else{
                unsigned long long cnt=0;
                bool notpossible = false;
                for(int i=n-2;i>=0;i--){
                    if(a[i]>=a[i+1]){
                        while(a[i]!=0 && a[i]>=a[i+1]){
                            // a[i]/=2;
                            a[i] = a[i]>>1;
                            cnt++;
                        }
                        
                    }
                    if(a[i]>=a[i+1]){
                        notpossible=true;
                        break;
                    }
                }
                if(notpossible)cout<<-1<<endl;
                else{
                    cout<<cnt<<endl;
                }
            }
        }
    }
}