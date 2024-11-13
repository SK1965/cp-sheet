#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int r, int g, int b, int w) {
    int odd_count = (r % 2) + (g % 2) + (b % 2) + (w % 2);
    return odd_count <= 1;
}
void solve(){
    int r ,g,b,w;
     cin >> r >> g >> b >> w;
      if (check(r, g, b, w)) {
          cout << "Yes" << endl;
      }
      // Check if modifying the counts can satisfy the condition
      else if (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 1)) {
          cout << "Yes" << endl;
      }
      // If neither condition is met, print "No"
      else {
          cout << "No" << endl;
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