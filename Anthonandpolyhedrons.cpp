// https://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int count=0;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s[0]=='T'){
            count+=4;
        }else if(s[0]=='C'){
            count+=6;
        }else if(s[0]=='O'){
            count+=8;
        }else if(s[0]=='D'){
            count+=12;
        }else{
            count+=20;
        }
    }

    cout<<count<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
   
  return 0;  
}