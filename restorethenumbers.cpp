#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    for(int i=0;i<3;i++){
        cout<<arr[3]-arr[i]<<" ";
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}