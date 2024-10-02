// https://codeforces.com/problemset/problem/151/A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, l, c, d, p, nl, np;
    //n = no of friends
    //k = total bottles
    //l = bottle capacity
    //c  = no of limes
    //d = no off slices in lime
    // p = salt amount
    //nl = 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totaldrink = k*l;
    int totalslices = c*d;
    int eachserve = nl*n;
    
    
    int toasts = min(totaldrink/eachserve , min(p/(np*n) ,totalslices/n ));
    cout<<toasts<<endl;

}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
  return 0;  
}