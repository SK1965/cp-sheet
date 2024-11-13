#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
     if(n%k==0 && (n==k && m>1) || m==n){
        cout<<0<<endl;
        return;
    } 
    int split = n/k;
    int max_j = min(split , m);
    int s_max = (m - max_j  +k-2)/(k-1);
    cout<<max_j - s_max<<endl;
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