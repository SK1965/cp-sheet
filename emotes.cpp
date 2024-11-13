#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int first=0 , second=0 ;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(first<=x){
            second=first;
            first=x;
        }else if(second<x){
            second=x;
        }
       
    }
    if(first==second){
        cout<<m*first<<endl;
    }else{
        int ans = (m-(m/(k+1)))*first + ((m/(k+1))*second) ; 
        cout<<ans<<endl;
    }
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}