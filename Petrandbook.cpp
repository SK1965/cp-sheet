#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(7);
    int sum = 0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int i=0;
    while(n>0){
        n-=arr[i];
        if(n>0)i = (i+1)%7;
    }
    cout<<i+1<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}