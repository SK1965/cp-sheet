#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,n;
    cin>>a>>b>>c>>n;
    int avg = (a+b+c+n)/3 ;
    if( (a+b+c+n)%3==0 && (avg-a)>=0 && (avg-b)>=0 && (avg-c)>=0){
        cout<<"YES"<<endl;
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