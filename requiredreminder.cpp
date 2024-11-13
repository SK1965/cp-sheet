#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,n;
    cin>>a>>b>>n;
    int k = n/a;
    cout<<(k*a+b > n  ? ((k-1)*a+b) : k*a+b )<<endl;
    
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