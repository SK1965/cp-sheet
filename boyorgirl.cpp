// https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    set<int> st;
    cin>>s;
    st.insert(s.begin() , s.end());

    cout<<(st.size()%2 ? "IGNORE HIM!":"CHAT WITH HER!" )<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}