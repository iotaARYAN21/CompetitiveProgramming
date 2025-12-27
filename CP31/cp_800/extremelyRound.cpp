#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long cnt=0;
        for(int i=1;i<=9;i++){
            long long j=1;
            // long long c=1;
            while(i*j<=n){
                j*=10;
                cnt++;
            }
        }
        cout<<cnt<<endl;


        // if(n>=1 && n<10)cout<<n<<endl;
        // else{
        //     n=n-(n%10); // WRONG as there should be only one non zero digit
        //     int cnt = (n-10)/10 + 1;
        //     cnt+=9;
        //     cout<<cnt<<endl;
        // }
    }
}