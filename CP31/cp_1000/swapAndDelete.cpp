#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count0=0,count1=0;
        for(char ch:s){
            if(ch=='0')count0++;
            else count1++;
        }
        int cnt=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(count0>0)count0--;
                else {
                    cnt=n-i;
                    break;
                }
            }
            else {
                if(count1>0)count1--;
                else{
                    cnt=n-i;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}