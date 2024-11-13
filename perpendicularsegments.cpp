#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,k;
    cin>>x>>y>>k;


    int a = min(x,y);

    cout<<0<<" "<<0<<" "<<a<<" "<<a <<endl;
    cout<<0<<" "<<a<<" "<<a<<" "<<0 <<endl;

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