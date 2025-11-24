#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    first of all the min fuel should be >= max diff between any two stop including start and end 
    then if from the last gas stop to the final stop . the remaining fuel on reaching the final stop is less than this max fuel then the required min would be added by this remaining fuel as
    if we are able to go from final to n-1 then we get refueld again and we can move back easily
    */
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int diff=arr[0];
        for(int i=0;i<n-1;i++)diff=max(diff,abs(arr[i]-arr[i+1]));
        diff=max(diff,abs(arr[n-1]-x));
        int dist =x - arr[n-1];
        int rem =abs(diff - dist);
        if(rem>=dist)cout<<diff<<endl;
        else{
            cout<<diff+(dist-rem)<<endl;
        }
    }
}