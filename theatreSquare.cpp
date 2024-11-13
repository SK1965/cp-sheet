#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int m,n,a;
    cin>>m>>n>>a;
    // 6 6 4  ans 4
    // 1 1 1 ans 1
    int stonesr = (m%a  ? m/a+1 : m/a);
    int stonesc = (n%a ? n/a+1 : n/a);
    cout<<stonesr*stonesc<<endl;


}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}