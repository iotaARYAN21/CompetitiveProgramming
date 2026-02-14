#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int start,end;
    start=-1;
    end=n-1;
    char ch=s[n-1];
    // bool flag=true;
    for(int i=n-2;i>=0;i--){
        if(s[i]>ch){
          start=i;
          break;  
        }
        else{
            ch=min(ch,s[i]);
            end=i;
        }
    }
    if(start==-1)cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<start+1<<" "<<end+1<<endl;
    }
}