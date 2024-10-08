// https://codeforces.com/problemset/problem/1095/A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    ans += s[0];
    int i=1;
    while(i<n){
        ans+=s[i];
        i+=(ans.size()+1);
        
    }
    cout<<ans<<endl;
       
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}