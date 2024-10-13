#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt = a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i+1]<=a[i] ){
             a[i] = (a[i+1]-1);
            cnt += a[i];
            if(a[i]==0)break;
        }
        else{
            cnt+=a[i];
        }
    }
    cout<<cnt;
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}