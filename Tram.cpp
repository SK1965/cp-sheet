// https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int maxsize=0  , total=0;

    while(n--){
        int in ,out;
        cin>>out>>in;
        total = total-out;
        total = total+in;
        maxsize = max(total , maxsize);
    }
    cout<<maxsize;
    
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}