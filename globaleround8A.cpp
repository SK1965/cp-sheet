// https://codeforces.com/problemset/problem/1368/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a , b ,n;
    cin>>a>>b>>n;
    int cnt =0;
    while(a<=n && b<=n){
        if(a>b){
            b+=a;
        }
        else{
            a+=b;
        }
        cnt++;
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