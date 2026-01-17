#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==1)cout<<-1<<endl;
        else{
            if(n==2)cout<<-1<<endl;
            else{
                long long mx,mn;
                long long np = n/2;
                mx=np/2;

                if(np%3==0)mn=np/3;
                else if(np%3==1 || np%3==2)mn=(np/3)+1;
                cout<<mn<<" "<<mx<<endl;
            }
        }
    }
}