#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==1)cout<<"First\n";
            else cout<<"Second\n";
        }
        else{

            // playing optimally here means first they will use C and then their own buttons
            if(c%2==0){
                // next turn is of Katie
                if(a>=b)cout<<"First\n";
                else cout<<"Second\n";
            }
            else{
                if(a>b)cout<<"First\n";
                else cout<<"Second\n";
            }
            // thinking 2
            // int new_a = a-min(a,b) , new_b = b-min(a,b);
            // if(c%2==0){
            //     if(new_a==0)cout<<"Second\n";
            //     else cout<<"First\n";
            // }
            // else{
            //     if(new_a==0)cout<<"First\n";
            //     else cout<<"Second\n";
            // }

            // thinking 3
            // int diff = abs(a-b);
            // if(c>=diff){
            //     if((c-diff)%2==0){
            //         cout<<"Second\n";
            //     }
            //     else{
            //         cout<<"First\n";
            //     }
            // }
            // else{
            //     if(a<=b)cout<<"Second\n";
            //     else cout<<"First\n";
            // }
        }
    }
}