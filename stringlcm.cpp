#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    cin>>a>>b;
    int m = a.length();
    int n = b.length();

    int lcm = m*n / __gcd(m,n);
    string str1="" , str2="";
    int n1=0 , n2=0;

    while(n1<lcm){
        str1.insert(n1 , a);
        n1+=m;
    }
    while(n2<lcm){
        str2.insert(n2,b);
        n2+=n;
    }
    if(str1==str2){
        cout<<str1<<endl;
    }
    else{
        cout<<-1<<endl;
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