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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int tmp = 0;
        int ans ;
        for (int i = 0; i < n; i++)
        {
            int cnt=0;
            for (int j = 0; j < n; j++)
            {
                if(i==j) continue;
                if(abs(a[i]-a[j])%k!=0 && a[i]-a[j]!=0)
                {
                
                    ans=i;
                    cnt++;
                }
            }
            if(cnt==n-1)
            {
                tmp=1;
                break;
            }
        }
        if(tmp)
        {
            
            cout<<"YES"<<endl<<ans+1<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}