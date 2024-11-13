#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 1)), b(n, vector<int>(m));

    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            cin >> b[i][j];

    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < m; j++) {
            if(b[i][j] == 0){ 
                for(int k = 0; k < m; k++) a[i][k] = 0; 
                for(int k = 0; k < n; k++) a[k][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int y = 0;
            for(int k = 0; k < m; k++) y |= a[i][k];
            for(int k = 0; k < n; k++) y |= a[k][j];
            if(y != b[i][j]) { cout << "NO\n"; return 0; }
        }
    }

    cout << "YES\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) 
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
