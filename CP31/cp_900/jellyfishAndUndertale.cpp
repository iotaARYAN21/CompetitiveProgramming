#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        long long time=0;
        // method 2
        for(int i=0;i<n;i++){
            if(arr[i]<a)time+=arr[i];
            else time+=a-1;
        }
        time+=b;
        cout<<time<<endl;

        // time = b-1;
        // b=1;
        // // sort(arr.begin(),arr.end());  as at last we stop at b=1 so order not matters
        // for(int i=0;i<n;i++){
        //     if(b+arr[i]<=a){
        //         time++;
        //         b = b+arr[i]-1;
        //         if(b!=1){
        //             time+=b-1;
        //             b=1;
        //         }
        //     }
        //     else{
        //         time++;
        //         b=a-1;
        //         if(b!=1){
        //             time+=b-1;
        //             b=1;
        //         }
        //     }
        // }
        // time+=b;
        // cout<<time<<endl;
    }
}