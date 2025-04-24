#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check if we can collect all required beauties with a flower of beauty 'insertBeauty' inserted
bool canCollect(const vector<int>& a, const vector<int>& b, int insertBeauty) {
    int n = a.size();
    int m = b.size();
    
    // Try each possible insertion position
    for (int pos = 0; pos <= n; ++pos) {
        int j = 0; // Index for array b
        
        // Check flowers before insertion point
        for (int i = 0; i < pos; ++i) {
            if (j < m && a[i] >= b[j]) {
                ++j;
            }
        }
        
        // Check the inserted flower
        if (j < m && insertBeauty >= b[j]) {
            ++j;
        }
        
        // Check flowers after insertion point
        for (int i = pos; i < n; ++i) {
            if (j < m && a[i] >= b[j]) {
                ++j;
            }
        }
        
        // If we collected all required beauties
        if (j == m) {
            return true;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];
        
        // Check if we can collect all required beauties without inserting a new flower
        int j = 0;
        for (int i = 0; i < n && j < m; ++i) {
            if (a[i] >= b[j]) {
                ++j;
            }
        }
        
        // If all were collected, output 0
        if (j == m) {
            cout << 0 << '\n';
            continue;
        }
        
        // Binary search for minimum beauty to insert
        int left = 1, right = 1e9, answer = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (canCollect(a, b, mid)) {
                answer = mid;
                right = mid - 1; // Try to find a smaller value
            } else {
                left = mid + 1;
            }
        }
        
        cout << answer << '\n';
    }
    
    return 0;
}
