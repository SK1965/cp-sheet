#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,s;
    cin>>a>>b>>s;
    a= abs(a);
    b= abs(b);
    s=abs(s);
    if(s-(a+b)>=0 && (s-(a+b))%2==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}