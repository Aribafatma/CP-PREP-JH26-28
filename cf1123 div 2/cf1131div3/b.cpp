#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    
    int n = x + y + z;
    
    if (x >= y && x >= z) {
        cout << string(n, 'P') << "\n";
    } else if (y >= x && y >= z) {
        cout << string(n, 'R') << "\n";
    } else {
        cout << string(n, 'S') << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
