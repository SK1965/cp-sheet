#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k,r;
    cin>>k>>r;
    int cnt=1;
    int n=k;
    while(k%10!=r && k%10){
        k+=n;
        cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}