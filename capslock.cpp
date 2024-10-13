#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    bool c = true;
   for(int i=1;i<n;i++){
      if(islower(s[i])){
        c= false;
      }
   }
   if(c==true){
       char l ;
       for(int i=0;i<n;i++){
        if(islower(s[i])){
            l = toupper(s[i]);
        }else{
            l= tolower(s[i]);
        }
        cout<<l;
       }
   }
   else{
    cout<<s;
   }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}