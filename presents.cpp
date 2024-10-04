//https://codeforces.com/problemset/problem/136/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> vect(n);
    unordered_map<int ,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vect[i] = i;
        mp[x] = i;
    }
    for(int i=1;i<=n;i++){
       cout<<mp[i]+1<<" ";
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}