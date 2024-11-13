#include<bits/stdc++.h>
using namespace std;
void solve(){
    string t1 , t2;
    cin>>t1>>t2;
   int h1 = stoi(t1.substr(0,2));
   int m1 = stoi(t1.substr(3 , 2));
   int h2 = stoi(t2.substr(0,2));
   int m2 = stoi(t2.substr(3 , 2));

   int avg  = ((h1*60)+m1 + (h2*60)+m2)/2;
   int hr = avg/60;
   int mi = avg%60;
   cout<<(hr>=10 ? to_string(hr) : '0'+to_string(hr))<<":"<<(mi>=10 ? to_string(mi) : '0'+to_string(mi))<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
        solve();
   
  return 0;  
}