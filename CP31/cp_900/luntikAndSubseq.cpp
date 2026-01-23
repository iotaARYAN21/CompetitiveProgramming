#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        long long count1=0,count0=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)count1++;
            else if(arr[i]==0)count0++;
        }
        cout<<count1*((long long)1<<count0)<<endl;
    }
}