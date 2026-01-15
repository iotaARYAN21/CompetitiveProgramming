#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int count1 = 0 , count0=0;
        for(char ch:s){
            if(ch=='1')count1++;
            else count0++;
        }
        if(min(count1,count0)%2==0)cout<<"NET\n";
        else cout<<"DA\n";
    }
}