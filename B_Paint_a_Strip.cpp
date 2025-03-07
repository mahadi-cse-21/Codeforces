#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << 2 << endl;

        else
        {
            int index = 4;
            int ans = 2;

            while (index < n)
            {
                index = 3 * index + 2;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}