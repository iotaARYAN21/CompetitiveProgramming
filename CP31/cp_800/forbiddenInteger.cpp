#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1 && x==1)cout<<"NO\n";
        else if(k==2 && x==1 && n%2==1)cout<<"NO\n";
        else{
            if(x==1){
                int count2 = n/2;
                cout<<"YES\n";
                cout<<count2<<endl;
                if(n%2==0){
                    while(count2!=0){
                        cout<<2<<" ";
                        count2--;
                    }
                    cout<<endl;
                }
                else{
                    while(count2!=1){
                        cout<<2<<" ";
                        count2--;
                    }
                    cout<<3<<endl;
                }
            }
            else{
                cout<<"YES\n";
                cout<<n<<endl;
                while(n--)cout<<1<<" ";
                cout<<endl;
            }
        }
    }
}