#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int nred = r/(b+1);
        int remR =r%(b+1);
        string res;
        for(int i=0;i<b;i++){
            for(int i=0;i<nred;i++)res.push_back('R');
            if(remR){
                res.push_back('R');
                remR--;
            }
            res.push_back('B');
        }
        for(int i=0;i<nred;i++)res.push_back('R');
        cout<<res<<endl;
    }
}