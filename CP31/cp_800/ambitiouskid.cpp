#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        res=min(res,abs(arr[i]));
    }
    cout<<res<<endl;
}