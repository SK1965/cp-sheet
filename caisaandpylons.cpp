#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i] , mx);
    }
    cout<<mx<<endl;

}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}