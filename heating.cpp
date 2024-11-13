#include<bits/stdc++.h>
using namespace std;
void solve(){
    int c, sum;
    cin>>c>>sum;
    int d = sum / c;
	int rem = sum % c;
    
	cout << rem * (d + 1) * (d + 1) + (c - rem) * d * d << endl;
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