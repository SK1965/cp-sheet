#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<5;i++){
        string q ; 
        cin>>q;
        if(s[0] == q[0] || s[1] == q[1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}