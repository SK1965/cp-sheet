
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int total;
    cin>>total;
    int n=0;
    int cubes=0;
    
    while(cubes<total){
        cubes+=((n+1)*(n+2)/2);
        if(cubes <=total){
            n++;
        }
    }
    cout<<n;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}