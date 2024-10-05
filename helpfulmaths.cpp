 // https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<char> vect;
    for(int i=0;i<s.size();i+=2){
        vect.push_back(s[i]);
    }
    sort(vect.begin() , vect.end());
    for(int i=0;i<vect.size()-1;i++){
        cout<<vect[i]<<"+";
    }
    cout<<vect[vect.size()-1];
}

int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}