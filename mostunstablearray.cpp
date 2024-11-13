#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,s;
    cin>>n>>s;
    if(n==1)return 0;
    if(n==2)return s;
    return 2*s;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
        }
  return 0;  
}