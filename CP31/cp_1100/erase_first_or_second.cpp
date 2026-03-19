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
        set<char> st;
        long long cnt=0;
        for(char ch:s){
            st.insert(ch);
            cnt+=st.size();
        }
        cout<<cnt<<endl;
    }
}