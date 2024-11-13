#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
   int n=pow(10,a-1);
   cout<<n<<" ";
   for(int i=0;i<(b-c+1);i++){
    cout<<1;
   }
   for(int i=0;i<(c-1);i++){
    cout<<0;
   }
   cout<<endl;
   
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

