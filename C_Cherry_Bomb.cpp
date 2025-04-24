#include <bits/stdc++.h>
using namespace std;

int count_complementary_arrays(int n, int k, vector<int>& a, vector<int>& b) {
    // If we have at least one known b value, we can determine x
    int known_x = -1;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            known_x = a[i] + b[i];
            break;
        }
    }
    
    if (known_x != -1) {
        // Check if all elements are valid with this x
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                if (a[i] + b[i] != known_x) {
                    return 0;  // Invalid because a[i] + b[i] ≠ x
                }
            } else {
                int bi = known_x - a[i];
                if (bi < 0 || bi > k) {
                    return 0;  // Invalid because required b[i] is out of range
                }
            }
        }
        return 1;  // All elements can satisfy the condition
    } else {
        // All b elements are -1, find the intersection of valid x ranges
        int min_range = INT_MIN;  // Maximum of all lower bounds
        int max_range = INT_MAX;  // Minimum of all upper bounds
        
        for (int i = 0; i < n; i++) {
            // For each position, x can be between a[i] and a[i]+k
            min_range = max(min_range, a[i]);        // Lower bound for x
            max_range = min(max_range, a[i] + k);    // Upper bound for x
            
            if (min_range > max_range) {
                return 0;  // Empty intersection
            }
        }
        
        // Size of the intersection is the count of valid configurations
        return max_range - min_range + 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        cout << count_complementary_arrays(n, k, a, b) << '\n';
    }
    return 0;
}