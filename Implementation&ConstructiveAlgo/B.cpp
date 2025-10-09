#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int res=0;
    for(int i=0;i<x.length();i++){
        int digit = x[i]-'0';
        res*=10;
        digit = min(digit,9-digit);
        res+=digit;
    }
    if(res==0){
        // cout<<x.substr(1); // if 999 then only remove teh first 
        cout<<9;
    }
    else{
        cout<<res;
    }
}