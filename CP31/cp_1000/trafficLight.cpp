#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        string temp = s+s;
        int ind = n-1;
        while(ind>=0 && s[ind]!=c)ind--;
        if(ind==-1)cout<<1e9;
        else{
            int res=INT_MIN;
            int pos=ind;
            for(int i=pos;i<2*n;i++){
                if(temp[i]=='g'){
                    pos=i;
                    break;
                }
            }
            res=pos-ind;
            while(ind>=0){
                if(s[ind]=='g'){
                    pos=ind;
                }
                else if(s[ind]==c){
                    res=max(res,pos-ind);
                }
                ind--;
            }
            cout<<res<<endl;
        }   
    }
}