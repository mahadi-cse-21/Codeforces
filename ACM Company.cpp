#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<pair<int, int>, string>> cars;

        for (int i = 0; i < n; i++) {
            string maker;
            int low, high;
            cin >> maker >> low >> high;
            cars.push_back({{low, high}, maker});
        }

        int q;
        cin >> q;
        while (q--) {
            int p;
            cin >> p;
            string result = "UNDETERMINED";
            int count = 0;

            for (auto &car : cars) {
                if (car.first.first <= p && car.first.second >= p) {
                    if (count == 0) {
                        result = car.second;
                        count++;
                    } else {
                        result = "UNDETERMINED";
                        break;
                    }
                }
            }

            cout << result << endl;
        }

        if (t) cout << endl;
    }
    return 0;
}
