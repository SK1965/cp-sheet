#include<bits/stdc++.h>
using namespace std;
void solve(){
    string aa, bb;
        cin >> aa >> bb;

        int ln = aa.length();
        int ln2 = bb.length();

        bool ok = false;
        sort(aa.begin(), aa.end());
        for (int i = 0; i < ln2 - ln + 1; ++i) {
            string temp = bb.substr(i, ln);
            //cout << temp << endl;
            sort(temp.begin(), temp.end());
            if(aa == temp){
                ok = true;
                break;
            }
        }

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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