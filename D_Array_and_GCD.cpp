#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;
        
        // Check if there is any pair (ai, aj) with GCD(ai, aj) != 1
        bool need_removal = false;
        
        sort(a.begin(), a.end());
        for (int i = 1; i < n; ++i) {
            if (gcd(a[i], a[i-1]) != 1) {
                need_removal = true;
                break;
            }
        }

        // Special case
        bool has1 = false;
        for (auto x : a) {
            if (x == 1) {
                has1 = true;
                break;
            }
        }
        
        if (need_removal) {
            cout << "1\n"; // Need to remove at least one element
        } else {
            cout << "0\n"; // No need to remove
        }
    }

    return 0;
}
