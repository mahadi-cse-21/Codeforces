#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Strategy: Try triangles until we find one that doesn't contain any points
    // For each valid response, we'll keep track of points we know are inside certain triangles
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = j + 1; k <= n; k++) {
                cout << "? " << i << " " << j << " " << k << endl;
                int response;
                cin >> response;
                
                if (response == -1) {
                    exit(0);  // Invalid query or exceeded limit
                }
                
                if (response == 0) {
                    // Found a triangle with no points inside
                    cout << "! " << i << " " << j << " " << k << endl;
                    int verdict;
                    cin >> verdict;
                    if (verdict == -1) exit(0);
                    return;
                }
            }
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}