// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<pair<int,int>> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i].first;
//             a[i].second=i;
//         }
//         sort(a.begin(),a.end(),greater<>());
//         vector<int> b;
//         deque<pair<int,int>>dq;
//         dq.push_front({0,0});
//         int elt=1;
//         int index=0;
//         while(dq.size()!=n+1){
//             if(elt>0){
//                 dq.push_back({elt,a[index++].second});
//                 elt*=-1;
//             }
//             else{
//                 dq.push_front({elt,a[index++].second});
//                 elt*=-1;
//                 elt++;
//             }
//         }
//         for(auto elt:dq)b.push_back(elt.second);
//         long long sum=0;
//         int x=1;
//         for(int i=0;i<n;i+=2){
//             sum+=abs(x)*2*a[i].first;
//             if(i+1<n){
//                 sum+=abs(x)*2*a[i+1].first;
//             }
//             x++;
//         }
//         cout<<sum<<endl;
//         for(int i=0;i<b.size();i++)cout<<b[i]<<" ";
//         cout<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<long long,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;   // original index
        }

        // sort in descending order of visits
        sort(a.begin(), a.end(), greater<>());

        vector<long long> ans(n + 1);
        ans[0] = 0;   // headquarters at 0

        long long sum = 0;
        long long dist = 1;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ans[a[i].second + 1] = dist;
            }
            else{
                ans[a[i].second + 1] = -dist;
                dist++;
            }

            sum += 2LL * abs(ans[a[i].second + 1]) * a[i].first;
        }

        cout << sum << "\n";

        for(int i = 0; i <= n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}