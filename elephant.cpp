#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int steps = n/5;
    if(n%5)steps++;
    cout<<steps<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}