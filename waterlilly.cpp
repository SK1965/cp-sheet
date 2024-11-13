#include<bits/stdc++.h>
using namespace std;

void solve(){
    double h  ,l;
    cin>>h>>l;
    // ((L * L - H * H) / (2 * H))
    cout<<fixed << setprecision(10)<<double((l*l-h*h)/(2*h))<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}