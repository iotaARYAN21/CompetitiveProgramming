#include<bits/stdc++.h>
using namespace std;
static bool comp(const int& a,const int& b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());
        if(a[0] == a[n-1])cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<a[n-1]<<" ";
            for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
            cout<<endl;
        }


        // bool allEqual = true;
        // for(int i=0;i<n-1;i++){
        //     if(a[i]!=a[i+1]){
        //         allEqual=false;
        //         break;
        //     }
        // }
        // if(allEqual){
        //     cout<<"NO\n";
        // }
        // else{

        //     // // sort in decreasing order
        //     // sort(a.begin(),a.end(),comp);
        //     // if(n>2){
        //     //     if(a[0]==a[1]){
        //     //        for(int i=2;i<n;i++){
        //     //         if(a[i]!=a[1]){
        //     //             swap(a[i],a[1]);
        //     //             break;
        //     //         }
        //     //        } 
        //     //     }
        //     // }
        //     // cout<<"YES\n";
        //     // for(int elt:a){
        //     //     cout<<elt<<" ";
        //     // }
        //     // cout<<endl;
        // }
    }
}