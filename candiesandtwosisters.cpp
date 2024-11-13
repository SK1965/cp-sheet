#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    cout<<(n%2==0 ? n/2-1 : n/2)<<endl;
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