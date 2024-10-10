#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int indx=n;
    n= n*2;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin() , nums.end());
    int ans =abs(nums[indx-1] - nums[indx]);
    cout<<ans<<endl;
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