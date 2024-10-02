// https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max(max(a,b),c);
    int mn=min(min(a,b),c);
    int mid= (mn+mx)/2;
    cout<<(abs(mn-mid)+abs(mx-mid))<<endl;
    
    
}