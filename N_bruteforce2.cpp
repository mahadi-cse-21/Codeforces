#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        vector<int> a(r);
        for(int i=0; i<r; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        int median = a[r/2];
        int ans = 0;
        for(int i=0; i<r; i++)
        {
            ans = ans+abs(median-a[i]);
        }
        cout<<ans<<endl;

    }

    return 0;
}

