#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=0;i<n;i++){
      cnt+=((i+1)*(n-i)-i);
    }
    cout<<cnt;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}