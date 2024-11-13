#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<=2){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl<<n-(n/2)<<" ";
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
      
    }
    cout<<endl<<n/2<<" ";
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
       
    }

   
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}