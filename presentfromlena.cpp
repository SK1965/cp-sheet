#include<bits/stdc++.h>
using namespace std;
void design(vector<vector<int>>& mat , int n){
    for(int i=0;i<=n;i++){
        int k=0;
        for(int j=0;j<=n;j++){
            if(i+j>=n){
                mat[i][j]=k;
                k++;
            }
        }
    }
    for(int i=0;i<=n;i++){
        int k=0;
        for(int j=2*n;j>=n;j--){
            if(j-i<=n){
                mat[i][j]=k;
                k++;
            }
        }
    }
    for(int i=n+1;i<=2*n;i++){
        int k=0;
        for(int j=0;j<=2*n;j++){
            mat[i][j]=mat[2*n-i][j];
            
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> mat(2*n+1 , vector<int>(2*n+1 , -1));
    design(mat , n);
    
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            if(mat[i][j]==-1){
                if(j>n)break;
                else cout<<" ";
            }else if(mat[i][j]==0){
                cout<<0;
                if(j>=n)break;
            }else{
                cout<<mat[i][j];
            }
            cout<<" ";
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