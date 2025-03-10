#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n, k;
    cin >> n >> k;  // Input n and k
    vector<ll> arr(n, 0);  // Initialize a vector of size n with all elements set to 0
    
    arr[n-1] = n-1;  // Set the last element to n-1
    arr[n-2] = n;  // Set the second to last element to n
    
    // Fill the array based on the parity of k
    for (int i = 0; i < n-2; i++) {
        if (k % 2 != 0) {
            arr[i] = n;
        } else {
            arr[i] = n-1;
        }
    }
    
    // Print the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    }
    
}

int main() {
    solve();
    return 0;
}
