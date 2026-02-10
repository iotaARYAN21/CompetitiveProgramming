#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)cin>>arr[i][j];
        }
        int cntNeg=0;
        int smallest=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=abs(arr[i][j]);
                // smallest=min(smallest,arr[i][j]);  // if all negative then smallest is the largest
                smallest=min(smallest,abs(arr[i][j]));
                if(arr[i][j]<0)cntNeg++;
            }
        }
        if(cntNeg%2==0)cout<<sum<<endl;
        else{
            cout<<sum-2*(smallest)<<endl;
        }
    }
}