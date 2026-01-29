#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        // method2
        long long cnt_a=0;
        long long cnt_b = 0;
        while(n%2==0){
            n/=2;
            cnt_a++;
        }
        while(n%3==0){
            n/=3;
            cnt_b++;
        }
        if(n>1){
            // factor 5,7, etc exists
            cout<<-1<<endl;
        }
        else{
            if(cnt_a>cnt_b)cout<<-1<<endl;
            else{
                cout<<cnt_b+(cnt_b-cnt_a)<<endl;
            }

        }

        // long long cnt=0;
        // bool flag=true;
        // while(n!=1){
        //     if(n%6==0)n/=6;
        //     else if(n%3==0)n*=2;
        //     else {
        //         flag=false;
        //         break;
        //     }
        //     cnt++;
        // }
        // if(flag){
        //     cout<<cnt<<endl;
        // }
        // else cout<<-1<<endl;
    }
}