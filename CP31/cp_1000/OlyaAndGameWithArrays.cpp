#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> mat(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int> temp;
            for(int j=0;j<m;j++){
                int elt;
                cin>>elt;
                temp.push_back(elt);
            }
            sort(temp.begin(),temp.end());
            mat[i]=temp;
        }
        int mn=INT_MAX;
        int secmn=INT_MAX;
        for(int i=0;i<n;i++){
            mn=min(mn,mat[i][0]);
            sum+=mat[i][1];
            secmn=min(secmn,mat[i][1]);
        }
        sum=sum-secmn+mn;
        cout<<sum<<endl;


    }
    

}