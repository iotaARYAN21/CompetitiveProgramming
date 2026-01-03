#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    for(int i=1;i<=n;i++){
        string statement;
        cin>>statement;
        if(statement[1]=='+')x++;
        else{
            x--;
        }
    }
    cout<<x;
}