#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int w,h;
    cin>>w>>h;
    
    int maxdiffx=0;
    //for x ,0
    int x1_l;
    cin>>x1_l;
    vector<int> x1(x1_l);
    for(int i=0;i<x1_l;i++){cin>>x1[i];}
    if(maxdiffx<(x1[x1_l-1]-x1[0])){
        maxdiffx=(x1[x1_l-1]-x1[0]);
    }

    //for x,h
    int x2_l;
    cin>>x2_l;
    vector<int> x2(x2_l);
    for(int i=0;i<x2_l;i++){cin>>x2[i];}
    if(maxdiffx<(x2[x2_l-1]-x2[0])){
        maxdiffx=(x2[x2_l-1]-x2[0]);
    }

    int maxdiffy=0;
    //for 0,y
    int y1_l;
    cin>>y1_l;
    vector<int> y1(y1_l);
    for(int i=0;i<y1_l;i++){cin>>y1[i];}
    if(maxdiffy<(y1[y1_l-1]-y1[0])){
        maxdiffy=(y1[y1_l-1]-y1[0]);
    }

    //for w,y
    int y2_l;
    cin>>y2_l;
    vector<int> y2(y2_l);
    for(int i=0;i<y2_l;i++){cin>>y2[i];}
    if(maxdiffy<(y2[y2_l-1]-y2[0])){
        maxdiffy=(y2[y2_l-1]-y2[0]);
    }

cout<<max(maxdiffy*w , maxdiffx*h)<<endl;

    
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