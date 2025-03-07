#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int sum = n * (n * 1) / 2;
        if (k > sum)
        {
            cout << "No" << endl;
        }
        else if (k == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}