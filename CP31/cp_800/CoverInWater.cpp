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
        // check if 3 consecutive cell are empty then return 2 else return the number of cells
        if(n==1){
            if(s[0]=='.')cout<<1<<endl;
            else cout<<0<<endl;
        }
        else if(n==2){
            if(s[0]=='.'){
                if(s[1]=='.')cout<<2<<endl;
                else cout<<1<<endl;
            }
            else{
                if(s[1]=='.')cout<<1<<endl;
                else cout<<0<<endl;
            }
        }
        else{
            int cnt=0;
            bool flag = false;
            for(int i=0;i<=n-3;i++){
                if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                    cout<<2<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag){
                for(char ch:s){
                    if(ch=='.')cnt++;
                }
                cout<<cnt<<endl;
            }
        }
    }
}