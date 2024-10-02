// https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=5;
    vector<vector<int>> mat(n,vector<int>(n)) , vis(n,vector<int>(n,0)) ;
    int posx ,posy ; 
    int finx = 2 , finy=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                posx = i;
                posy=j;
            }
        }
        
    }
    int moves = abs(posx-finx)+abs(posy-finy);
    cout<<moves<<endl;
}

