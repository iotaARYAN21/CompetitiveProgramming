#include<bits/stdc++.h>
using namespace std;
vector<int> findPSE(vector<int>& a,int n){
    stack<int> st;
    vector<int> pse(n,-1);
    st.push(0);
    for(int i=1;i<n;i++){
        if(!st.empty()){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty())pse[i]=-1;
            else pse[i]=st.top();
            st.push(i);
        }
        else pse[i]=-1;
    }
    return pse;
}
vector<int> findNSE(vector<int>& a,int n){
    stack<int> st;
    vector<int> nse(n,n);
    st.push(n-1);
    nse[n-1]=n;
    for(int i=n-2;i>=0;i--){
        if(!st.empty()){
            while(!st.empty() && a[st.top()]>=a[i])st.pop();
            if(st.empty())nse[i]=n;
            else nse[i]=st.top();
            st.push(i);
        }
        else nse[i]=n;
    }
    return nse;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> pse = findPSE(a,n);
        vector<int> nse = findNSE(a,n);
        bool flag = false;
        for(int i=0;i<n;i++){
            if(pse[i]!=-1 && nse[i]!=n){
                flag = true;
                cout<<"YES\n";
                cout<<pse[i]+1<<" "<<i+1<<" "<<nse[i]+1<<endl;
                break;
            }
        }
        if(!flag)cout<<"NO\n";
    }
}