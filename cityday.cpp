#include<bits/stdc++.h>
using namespace std;

void solve(){
    int  n , a,b;
    cin>>n>>a>>b;
    vector<int> vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    for(int i=0;i<n;i++){
        if(i>0){
            int j=i-1;
            bool pt = false;
            while(j>=0 && i-j<=a ){
                if(vect[i]>vect[j]){
                    pt=true;
                    break;
                }
                j--;
            }
            if(pt)continue;
        }
        if(i<n-1){
            int j=i+1;
            bool pt = false;
            while(j<n && j-i<=b ){
                if(vect[i]>vect[j]){
                    pt=true;
                    break;
                }
                j++;
            }
            if(pt)continue;
        }
        cout<<i+1<<endl;
        break;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}