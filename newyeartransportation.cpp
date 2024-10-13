#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    while(i<t){
        i+=arr[i];
    }
    if(i==t)cout<<"YES";
    else cout<<"NO";
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}