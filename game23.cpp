#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , m;
    cin>>n>>m;
    if(m%n){
        cout<<-1<<endl;
        return;
    }
    int d = m/n;
    int cnt=0;
    while(d>1){
        if(d%2==0){
            d/=2;
        }else if(d%3==0){
            d/=3;
        }else{
            cout<<-1<<endl;
            return;
        }
        cnt++;
    }

    cout<<cnt<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}