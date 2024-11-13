#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    if(arr[n-2] + arr[n-3] <=  arr[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int i=0;
        while(i<n){
            cout<<arr[i+1]<<" ";
            cout<<arr[i]<<" ";
            i+=2;
        }
        cout<<endl;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}