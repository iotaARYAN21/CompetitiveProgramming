#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    if(a<=1)return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a = n-2;
    if(isPrime(a)){
        cout<<"2 "<<a<<endl;
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}