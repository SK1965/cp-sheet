#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int x = max({a,b,c});
    int y = min({a,b,c});
    int z = y;
    if((x==a && x==b) || (x==b && x==c) || (x==a && x==c)){
        cout<<"Yes"<<endl<<x<<" "<<y<<" "<<z<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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