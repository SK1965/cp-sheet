#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin>>s;
    int n = s.size() , digsum=0 , cnt_0=0;
    int even = 0;
    for(int i=0;i<n;i++){
        int dig = s[i]-'0';
        if(dig%2==0){even++;}
        if(dig==0){cnt_0++;}
        digsum+=dig;
    }
    if(even>=2 && cnt_0>=1 && digsum%3==0){
        cout<<"red"<<endl;
    }else{
        cout<<"cyan"<<endl;
    }
    
}
signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
  return 0;  
}