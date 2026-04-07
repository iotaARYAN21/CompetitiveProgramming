#include<bits/stdc++.h>
using namespace std;
bool kPal(vector<int>& arr,int n,int x){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==x)i++;
        else if(arr[j]==x)j--;
        else if(arr[i]!=arr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x:a)cin>>x;
        bool flag=true; // for case n=1 or n==2;
        for(int i=0;i<n;i++){
            int l = i;
            int r = n-i-1;
            if(a[l]!=a[r]){
                flag = kPal(a,n,a[l]) || kPal(a,n,a[r]);
                break; // as only allowed to manipulate one element;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}