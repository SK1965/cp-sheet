#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,a,b;
    cin>>a>>b>>n;
    if(a%n!=0 && b%n!=0){
        int borrow = min((a%n) , (b%n))+max((a%n) , (b%n));
       
        cout<<(a+b)/n<<" "<<(borrow>=n ? min(n-(a%n) , n-(b%n)) : 0)<<endl;
    }else{
        cout<<(a+b)/n << " "<<0<<endl;
    }
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}