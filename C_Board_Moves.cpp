#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long ans = 0;
        long long power_of_2 = 2;  // Start with 2^0 = 1
        
        // Loop through only odd indices starting from 3 up to n
        for (int i = 1; i <= n/2; i ++)
         {
          ans += i * 1ll * i; 
          }
        
        cout << ans*8 << endl;
    }

    return 0;
}
