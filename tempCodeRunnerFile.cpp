//https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int cnt4=0 , cnt7=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='4' && s[i]!='7'){
            cout<<"NO"<<endl;
            return;
        }