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
         /* for i in range(n-1, -1, -2):
	    print(a[i], end = " ")
    for i in range(n%2, n, 2):
	    print(a[i], end = " ") */

        for(int i=n-1;i>=0;i-=2){
            cout<<arr[i]<<" ";
        }
        for(int i=n%2;i<n;i+=2){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}