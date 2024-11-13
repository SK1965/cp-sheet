#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    if(r>=2*l)cout<<l<<" "<<2*l<<endl;
    else cout<<-1<<" "<<-1<<endl;
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