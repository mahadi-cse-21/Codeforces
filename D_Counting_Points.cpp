#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to check if a point (x,y) lies inside or on any circle
bool isInsideAnyCircle(ll x, ll y, vector<ll>& centers, vector<ll>& radii) {
    for(int i = 0; i < centers.size(); i++) {
        ll dx = x - centers[i];
        ll dy = y;
        if(dx*dx + dy*dy <= radii[i]*radii[i]) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> x(n), r(n);
    
    // Read centers and radii
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> r[i];
    
    // Find bounding box for optimization
    ll left = LLONG_MAX, right = LLONG_MIN;
    ll maxRadius = 0;
    for(int i = 0; i < n; i++) {
        left = min(left, x[i] - r[i]);
        right = max(right, x[i] + r[i]);
        maxRadius = max(maxRadius, r[i]);
    }
    
    // Count points
    ll count = 0;
    for(ll i = left; i <= right; i++) {
        for(ll j = -maxRadius; j <= maxRadius; j++) {
            if(isInsideAnyCircle(i, j, x, r)) {
                count++;
            }
        }
    }
    
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}