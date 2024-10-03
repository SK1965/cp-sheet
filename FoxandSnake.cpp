// https://codeforces.com/problemset/problem/510/A
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m  , n ;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<"#";
            }
            else{
                if(i%4==1 && j==n-1){
                    cout<<"#";
                }else if(i%4==3 && j==0){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
   
  return 0;  
}