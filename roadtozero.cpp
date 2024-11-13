#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int x,y,a,b;
    int t=0;
    cin>>x>>y>>a>>b;
    if(a*2 < b){
        cout<<(x+y)*a<<endl;
    }else{
        t+=(abs(x-y)*a);
        t+=(min(x,y)*b);
        cout<<t<<endl;
    }
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
  return 0;  
}