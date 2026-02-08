#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n =a.length(),m=b.length();
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string temp = a.substr(i,j-i+1);
                for(int p=0;p<m;p++){
                    for(int q=p;q<m;q++){
                        string temp2 = b.substr(p,q-p+1);
                        if(temp==temp2){
                            res=min(res,n-(j-i+1)+m-(q-p+1));
                        }
                    }
                }
            }
        }
        cout<<((res==INT_MAX)?(n+m):(res))<<endl;
    }
}