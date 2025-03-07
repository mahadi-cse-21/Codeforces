#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m + 1];
    arr[0] = 1;
    for (int i = 1; i <= m; ++i)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    for (int i = 0; i < m; ++i)
    {
        int r = arr[i + 1] - arr[i];
        if (r <  0)
        {
            ans += n + r;
        }
        else
        {
            ans += r;
        }
    }
    cout << ans;
}