#include <bits/stdc++.h>
using namespace std;

bool canMakeEqual(int a, int b, int c) {
    int total = a + b + c;
    // Check if total cards can be evenly divided into three equal parts
    if (total % 3 != 0) {
        return false;
    }
    int target = total / 3;
    
    return (a <= target && b <= target && c >= target);
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c && canMakeEqual(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}