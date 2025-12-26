#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b)cout<<-1<<endl;
        else{
            // Ax+By+C=0;   Y=mX+C;
            int C = b-a;
            if(a==c && b==d)cout<<0<<endl;
            else if(c-d+C > 0)cout<<-1<<endl;
            else{
                int diff = d-b;
                int newX = a+diff;
                cout<<abs(newX-c) + diff<<endl;
            }
        }
    }
}