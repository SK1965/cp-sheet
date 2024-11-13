#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if (a > 3) puts("YES");
	else if (a == 1) puts(b == 1 ? "YES" : "NO");
	else puts(b <= 3 ? "YES" : "NO");
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
  return 0;  
}