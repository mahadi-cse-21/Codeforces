#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=1;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int q;
        cin>>q;
        int query[q];
        for(int i=0; i<q; i++)
        {

            cin>>query[i];
        }


        cout<<"Case "<<tc<<":\n";
        for(int l=0; l<q; l++)
        {
            int ans = a[0]+a[1];
            for(int i=0; i<n-1; i++)
            {

                for(int j=i+1; j<n; j++)
                {

                       int sum=a[i]+a[j];
                    if(abs(sum-query[l])<abs(ans-query[l]))
                    {

                        ans = sum;
                    }
                }
            }
            cout<<"Closest sum to "<<query[l]<<" is "<<ans<<".\n";
        }
        tc++;
    }

    return 0;
}
