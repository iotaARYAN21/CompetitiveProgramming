#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> ap(n);
        for(int &elt:a)cin>>elt;
        for(int &elt:ap)cin>>elt;
        int i=0;
        int j=0;
        int s=0,e=0;
        int res=0;
        while(j<n){
            if(i==j || ap[j-1]<=ap[j])j++;
            else{
                // int nj=j-1;
                int ni=i;
                while(ni<j && a[ni]==ap[ni])ni++;
                if(ni>=j){
                    i=j;
                    continue;
                }
                if(res<j-i){
                    s=i;
                    e=j-1;
                    res=j-i;
                }
                i=j;
            }
        }
        int ni=i;
        while(ni<j && a[ni]==ap[ni])ni++;
        if(ni>=j){
            i=j;
            // continue;
            cout<<s+1<<" "<<e+1<<endl;
        }
        else if(res<j-i){
            s=i;
            e=j-1;
            res=j-i;
            cout<<s+1<<" "<<e+1<<endl;
        }
        
    }
}