#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    
      int c = 0,flag = 0;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++){
            if(i%2 != a[i] % 2){
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even){
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
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