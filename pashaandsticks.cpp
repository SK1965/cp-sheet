#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    if(n%2){
        cout<<0<<endl;
        return;
    }
    cout<<(n%4 ? n/4 : (n/4)-1)<<endl;
    
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}