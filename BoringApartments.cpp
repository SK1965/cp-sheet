//https://codeforces.com/problemset/problem/1433/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin>>n;
    int size = n.size();
    int dig = n[0]-'0';
    int total_digit = (dig-1)*10 + ((size*(size+1))/2);

    cout<<total_digit<<endl;

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