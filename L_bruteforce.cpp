#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int l = 0;
    while (cin >> k) {
             if (k == 0) break;
        if (l == 1) cout << "\n";
        l = 1;


       int found = 0;
        for (int y = 1000; y <= 99999; y++) {
            int abc[10] = {0};
            int a = y * k;


            if (a > 99999) break;

            string abcde = to_string(a);
            string fghij = to_string(y);


            while (abcde.size() < 5) abcde = '0' + abcde;
            while (fghij.size() < 5) fghij = '0' + fghij;


            for (char ch : abcde) abc[ch - '0']++;
            for (char ch : fghij) abc[ch - '0']++;

           int in = 1;
            for (int i = 0; i < 10; i++) {
                if (abc[i] != 1) {
                    in = 0;
                    break;
                }
            }

            if (in) {
                found = 1;
                cout << abcde << " / " << fghij << " = " << k << endl;
            }
        }

        if (!found) {
            cout << "There are no solutions for " << k << "." << endl;
        }
    }

    return 0;
}
