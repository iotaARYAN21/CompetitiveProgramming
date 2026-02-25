#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>& a,pair<int,int>& b){
    if(a.first!=b.first)return a.first<b.first;
    else return a.second>b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> b(n);
        for(int i=0;i<n;i++)cin>>b[i];
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({b[i],a[i]});
        }
        sort(temp.begin(),temp.end(),comp);
        long long sum=0;
        sum+=p;
        if(p<=temp[0].first)cout<<p*1LL*n<<endl;
        else{
            int val=temp[0].first;
            int cnt=temp[0].second;
            int i=1;
            queue<pair<int,int>> q;
            while(i<n && cnt!=0){
                sum+=val;
                cnt--;
                q.push(temp[i]);
                i++;
            }
            while(!q.empty() && i<n){
                auto front = q.front();
                q.pop();
                int f=front.first,s=front.second;
                if(f>=p){
                    sum+=(p*1LL*((n-1)-i+1));
                    break;
                }
                else{
                    while(i<n && s!=0){
                        sum+=f;
                        s--;
                        q.push(temp[i]);
                        i++;
                    }
                }
            }
            cout<<sum<<endl;
        } 
    } // tc O(nlogn) , sc O(2n)
}