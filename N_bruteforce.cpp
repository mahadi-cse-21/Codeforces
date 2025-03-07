#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        vector<int> a(r);
        for(int i=0;i<r;i++)
        {
            cin>>a[i];
        }
        int ans = 1e9;
        for(int i=0;i<=30000;i++)
        {
            int sum =0;
            for(int j=0;j<r;j++)
            {
                sum =sum+ abs(i-a[j]);
            }
            ans=min(ans,sum);

        }
        cout<<ans<<endl;

    }

    return 0;
}
