#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_gcd=0;
    int max = 0;
    multiset<pair<int,int>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
      if(max<a[i]) max=a[i];
    }
    int ans = -1;
    for(int i=2; i<=max; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {

            if(a[j]%i==0) count++;

        }
        if(count>=2)
            {
                if(i>ans) ans=i;
        }

    }
    cout<<ans;

    return 0;
}


