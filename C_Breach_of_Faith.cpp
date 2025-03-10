#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Size of the sequence `b` (2n elements)
        cin >> n;

        vector<long long> b(2 * n + 1);
        for (int i = 0; i < 2 * n + 1; ++i) {
            cin >> b[i];
        }

        // Sort the array `b`
        sort(b.begin(), b.end());

        long long total_sum = accumulate(b.begin(), b.end(), 0LL);

        bool found = false;

        for (int i = 0; i < 2 * n + 1; ++i) {
            // Assume `b[i]` is the missing number
            long long x = b[i];
            long long remaining_sum = total_sum - x;

            // If the remaining elements satisfy the conditions:
            vector<long long> temp;
            for (int j = 0; j < 2 * n + 1; ++j) {
                if (j != i) {
                    temp.push_back(b[j]);
                }
            }

            if ((long long)temp.size() == 2 * n) {
                found = true;
                for (const auto &val : temp) {
                    cout << val << " ";
                }
                cout << x << endl;
                break;
            }
        }
        if (!found) {
            cout << "Invalid" <<endl;
}
