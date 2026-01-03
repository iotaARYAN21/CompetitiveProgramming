#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j] || abs(s[i]-s[j])==2){
                i++;
                j--;
            }
            else{
                cout<<"NO"<<endl;
                // return 0 ;
                break;
            }
        }
        if(i==j || j+1==i)cout<<"YES\n";
    }
}