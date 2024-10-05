// https://codeforces.com/problemset/problem/546/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n  ,k , w ;
    cin>>k>>n>>w;

    int val  = (w*(w+1)/2)*k;
    cout<<max(val-n,0);

}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}