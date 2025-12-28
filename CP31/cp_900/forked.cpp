#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        // map<pair<int,int>,bool> vis;
        set<pair<int,int>> st1;
        st1.insert({c-a,d+b});
        st1.insert({c+a,d+b});
        st1.insert({c-b,d+a});
        st1.insert({c+b,d+a});
        st1.insert({c-b,d-a});
        st1.insert({c+b,d-a});
        st1.insert({c-a,d-b});
        st1.insert({c+a,d-b});
        // int cnt=0;
        set<pair<int,int>> st2;
        st2.insert({e-a,f+b});
        st2.insert({e+a,f+b});
        st2.insert({e-b,f+a});
        st2.insert({e+b,f+a});
        st2.insert({e-b,f-a});
        st2.insert({e+b,f-a});
        st2.insert({e-a,f-b});
        st2.insert({e+a,f-b});

        set<pair<int,int>> res;
        set_intersection(st1.begin(),st1.end(),st2.begin(),st2.end(),inserter(res,res.begin()));
        cout<<res.size()<<endl;
    }
}