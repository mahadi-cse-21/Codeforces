#include <iostream>
using namespace std;

bool canFormTriangle(long long a, long long b, long long c) {
    return (a > 0 && b > 0 && c > 0) && 
           (a + b > c && b + c > a && a + c > b);
}

int solve() {
    long long x;
    cin >> x;
    
    
     int low = 1, high = x-1;
    while (low < high) {
        int mid = (low + high) / 2;
        int y = mid;
        int z = x ^ y;

        if (canFormTriangle(x, y, z)) {
           
           return y;
        }
        if (mid>=x and mid>0) {
            high = mid-1;
        } else {
            low = mid + 1;
        }
    return -1;

    
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int ans = solve();

        cout << ans << "\n";

    }
    
    return 0;
}