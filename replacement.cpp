#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r;
    cin >> r;

    int i = 0;
    vector<char> st;

    
    for (char c : s) {
        st.push_back(c); 
        
        while (st.size() >= 2 && st[st.size() - 1] != st[st.size() - 2] && i < r.size()) {
            char replacement = r[i];
            st.pop_back(); 
            st.pop_back(); 
            st.push_back(replacement); 
            i++;
        }
    }

    if (i == n - 1 && st.size() == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
