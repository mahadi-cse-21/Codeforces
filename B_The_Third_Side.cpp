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
        int a[n];
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        cout<<sum-(n-1)<<endl;
        
    }
    return 0;
}