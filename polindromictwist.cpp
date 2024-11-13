#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0  , j =n-1;
    while(i<j){
        if( s[i]-1 == s[j]-1 || s[i]+1 == s[j]+1 || s[i]-1 == s[j]+1 || s[i]+1 == s[j]-1 ){
            i++;
            j--;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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