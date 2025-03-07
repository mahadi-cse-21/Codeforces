#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<int> suma;
    int x = 0;
    int temp = 0;
    bool debug = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp = temp + a[i];
        if (i == k - 1)
            debug = true;
        if (debug)
        {
            suma.push_back(temp);
            temp = temp - a[x];
            x++;
        }
    }
    int ans = 0;
    int sum = INT_MAX;
    for (int i = 0; i < suma.size(); i++)
    {
        // cout<<suma[i]<<" ";
        if (suma[i] < sum)
        {
            sum = suma[i];
            ans = i;
        }
    }

    cout << ans + 1;

    return 0;
}