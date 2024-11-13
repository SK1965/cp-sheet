#include<bits/stdc++.h>
using namespace std;
void solve(){
    int s,e;
    
    cin>>s>>e;
    int cnt=abs(s-e)/10;
    if(abs(s-e)%10>0)cnt++;
    cout<<cnt<<endl;
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