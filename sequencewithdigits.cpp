#include<bits/stdc++.h>
using namespace std;
#define  int long long
int retnum(int n){
    int mi=10 , ma = 0;
    while(n){
        int rem = n%10;
        n/=10;
        mi = min(mi , rem);
        ma = max(ma,rem);
    }
    return mi*ma;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        k--;
        while(k--){
            int y = retnum(x);
            if(y==0)break;
            x+=y;
        }
        cout<<x<<endl;
    }
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}