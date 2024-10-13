#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    int cnt=0;
    if(n<m){cout<<-1<<endl; return;}
    int mincnt = n%2 ? (n+1)/2 : n/2;
    cnt = mincnt%m ? mincnt+(m-(mincnt%m)) : mincnt;
    cout<<(cnt ? cnt : -1)<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}