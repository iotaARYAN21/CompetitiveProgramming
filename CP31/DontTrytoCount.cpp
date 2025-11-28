#include<bits/stdc++.h>
using namespace std;
bool isSubstr(int n,int m,string x,string s){
    for(int i=0;i<=n-m;i++){
        if(x.substr(i,m)==s)return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int cnt=0;
        bool flag = false;
            while(x.length()<=50){
            if(isSubstr(x.length(),m,x,s)){
                    flag=true;
                    cout<<cnt<<endl;
                    break;
                }
                else{
                    cnt++;
                    x+=x;
                }
            }
            if(!flag)cout<<-1<<endl;
        
    }
}