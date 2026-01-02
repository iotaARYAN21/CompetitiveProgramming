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
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==2)cnt2++;
        }
        if(cnt2==0)cout<<1<<endl;
        else{
            if(cnt2%2!=0)cout<<-1<<endl;
            else{
                cnt2/=2;
                for(int i=0;i<n;i++){
                    if(a[i]==2){
                        cnt2--;
                        if(cnt2==0){
                            cout<<i+1<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }
}