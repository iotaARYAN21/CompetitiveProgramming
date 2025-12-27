#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     while(a!=0 && b!=0){
//         if(a>b)a-=b;
//         else b-=a;
//     }
//     return (a==0)?b:a;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        bool found=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2){   // using my own gcd function gives tle
                    cout<<"Yes\n";
                    found=true;
                    break;
                }
            }
            if(found)break;
        }
        if(!found)cout<<"No\n";
    }
}