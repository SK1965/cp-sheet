#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n  , num=0;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s=="X++" || s=="++X")num++;
        else num--;
    }
    cout<<num<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}