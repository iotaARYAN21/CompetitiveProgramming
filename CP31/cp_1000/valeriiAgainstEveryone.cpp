#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++){
            int elt;
            cin>>elt;
            st.insert(elt);
        }
        if(st.size()==n){
            // all distinct elt => all nonoverlapping subarray has diff sum
            cout<<"NO\n"; 
        }
        else cout<<"YES\n";
    }
}