// https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s ; 
    cin>>s;
    int n  =s.size();
    for(int i=0;i<n;i++){
        int dig = s[i] - '0';

        if(i==0 && s[i] =='9') continue;
        if(9-dig < dig) s[i] = '0'+(9-dig);
    }

    cout<<s<<endl;
}