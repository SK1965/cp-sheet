#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int cnt_1=0;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            cnt_1++;
        }
    }
    if(n%2){
        if(cnt_1==0){
            cout<<n/2<<endl;
        }else{
            cout<<n/2+1<<endl;
        }
    }else{
        cout<<n/2<<endl;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}