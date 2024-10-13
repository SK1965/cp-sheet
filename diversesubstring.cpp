#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found = false;
    string ans;
    for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1]){
            found = true;
            ans+=s[i];
            ans+=s[i+1];
            break;
        }
       
    }
    if(found){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}