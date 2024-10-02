// https://codeforces.com/problemset/problem/1352/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vector<int> ans ; 
        int p=0;
        while(x>0){
            int rem = x%10;
            x/=10;
            int ele = rem*pow(10,p);
            if(ele>0)ans.push_back(ele);
            p++;
        }
        cout<<ans.size()<<endl;
        for(int j=ans.size()-1; j>=0; j--){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
     }
}