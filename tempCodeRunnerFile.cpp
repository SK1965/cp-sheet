#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int maxval=0, maxpos , minval=INT_MAX , minpos;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=maxval){
            maxval = x;
            maxpos = i;
        }
        if(x<=minval){
            minval = x;
            minpos = i;
        }
    }
    if(minval==maxval ||(maxpos==0 && minpos==n-1))cout<<0<<endl;
    if(maxpos > minpos ){
        cout<<(n-minpos-1) + (maxpos)-1;
    }else{
        cout<<(n-minpos-1) + (maxpos);
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
   
  return 0;  
}