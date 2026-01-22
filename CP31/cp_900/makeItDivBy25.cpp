#include<bits/stdc++.h>
using namespace std;
long long oper(string& digit,string& num){
    char f = digit[1];
    char s = digit[0];
    // cout<<f<<" "<<s<<endl;
    long long j=num.length()-1;
    long long steps=0;
    while(j>0 && num[j]!=f){
        j--;
        steps++;
    }
    long long i=j-1;
    while(i>=0 && num[i]!=s){
        i--;
        steps++;
    }
    return steps;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string num = to_string(n);
        vector<string> digits = {"00","25","50","75"};
        long long res=1e18;
        for(string digit:digits){ // max length of num=20 and 4 operation for each
            res=min(res,oper(digit,num));
        }
        cout<<res<<endl; // tc O(4*20) 
    }
}