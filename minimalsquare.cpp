#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b;
cin>>a >> b;
if(a > b)
    swap(a,b);
cout<<pow(max(a*2,b),2)<<endl;
    
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