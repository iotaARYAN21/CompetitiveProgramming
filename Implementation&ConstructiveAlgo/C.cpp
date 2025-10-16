#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
          int n;
          cin>>n;
          int cnt;
          int val=10;
          vector<int> res;
          while(n){
            int rem = n%val;
            if(rem!=0){
                // cout<<rem;
                res.push_back(rem);
            }
            val*=10;
            n-=rem;
          }
          cout<<res.size()<<endl;
          for(int elt:res)cout<<elt<<' ';
          cout<<endl;
    }
}