//https://codeforces.com/problemset/problem/1303/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0 , j=n-1;
    while(i<j && s[i]=='0' || s[j]=='0' ){
        if(s[i]=='0')i++;
        if(s[j]=='0')j--;
    }
    int cnt=0;
    for(int k=i;k<j;k++){
        if(s[k]=='0')cnt++;
    }
    cout<<cnt<<endl;
    
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