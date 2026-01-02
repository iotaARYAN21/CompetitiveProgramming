#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> board(10,vector<char>(10,' '));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)cin>>board[i][j];
        }
        int res=0;
        int r1=0,r2=9,c1=0,c2=9;
        int p=1;
        while(r1<=r2 && c1<=c2){
            for(int j=c1;j<=c2;j++){
                if(board[r1][j]=='X')res+=p;
            }
            r1++;
            for(int i=r1;i<=r2;i++){
                if(board[i][c2]=='X')res+=p;
            }
            c2--;
            for(int j=c2;j>=c1;j--){
                if(board[r2][j]=='X')res+=p;
            }
            r2--;
            for(int i=r2;i>=r1;i--){
                if(board[i][c1]=='X')res+=p;
            }
            c1++;
            p++;
        }
        cout<<res<<endl;
    }
}