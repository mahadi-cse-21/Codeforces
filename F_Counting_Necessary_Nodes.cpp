#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to find the largest power of 2 that fits in the region
ll findPower(ll x, ll y) {
    ll k = 0;
    while (((x >> k) << k) == x && ((y >> k) << k) == y) {
        k++;
    }
    return k - 1;
}

// Function to count minimum nodes needed
ll solve(ll l1, ll r1, ll l2, ll r2) {
    // Base cases
    if (l1 >= r1 || l2 >= r2) return 0;
    if (l1 + 1 == r1 && l2 + 1 == r2) return 1;
    
    // Find the largest power of 2 that fits in this region
    ll k = findPower(l1, r1);
    k = min(k, findPower(l2, r2));
    ll size = 1LL << k;
    
    // If we found a perfect square that matches our region
    if (l1 % size == 0 && l2 % size == 0 && 
        r1 % size == 0 && r2 % size == 0 && 
        r1 - l1 == size && r2 - l2 == size) {
        return 1;
    }
    
    // Split the region into sub-regions
    vector<pair<ll,ll>> splits_x, splits_y;
    
    // Split x-coordinates
    for (ll x = l1; x < r1;) {
        ll next_x = ((x + size) / size) * size;
        next_x = min(next_x, r1);
        splits_x.push_back({x, next_x});
        x = next_x;
    }
    
    // Split y-coordinates
    for (ll y = l2; y < r2;) {
        ll next_y = ((y + size) / size) * size;
        next_y = min(next_y, r2);
        splits_y.push_back({y, next_y});
        y = next_y;
    }
    
    // Count the minimum nodes needed for each sub-region
    ll total = 0;
    for (auto [x1, x2] : splits_x) {
        for (auto [y1, y2] : splits_y) {
            total += solve(x1, x2, y1, y2);
        }
    }
    
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << solve(l1, r1, l2, r2) << '\n';
    }
    
    return 0;
}