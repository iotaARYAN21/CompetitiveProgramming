#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;
    cin>>n>>d;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(n==1){
        if(arr[0]>d)cout<<1<<endl;
        else cout<<0<<endl;
    }
    else{
        long long i=0;
        long long j=n-1;
        long long cnt=0;
        while(j>=0){
            long long mx=arr[j];
            long long sum=mx;
            while(i<j && sum<=d){
                sum+=mx;
                i++;
            }
            if(sum>d){
                cnt++;
            }
                j--;

        }
        cout<<cnt<<endl;
    }
}