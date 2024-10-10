#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    s="";
    for(auto it:mp){
        
        if(it.second%n){
            cout<<-1<<endl;
            return;
        }
        else{
            int rep  =it.second/n;
            for(int i=0;i<rep;i++){
                s+=it.first;
            } 
        }
        
        
    }
    for(int i=0;i<n;i++){
            cout<<s;
        }
        cout<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}