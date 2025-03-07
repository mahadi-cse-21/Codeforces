#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int l=0;
    while (cin>>n)
    {
         int a[n]= {0};
        for(int i=0; i<n; i++) cin>>a[i];
        l++;
        int tmp=0;

        long long res =0,current = 1;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                current=1;
                for(int k=i; k<=j; k++)
                {
                    current=current*a[k];
                }
                res=max(res,current);
            }
        }

        cout<<"Case #"<<l<<": The maximum product is "<<res<<"."<<"\n\n";
    }
    return 0;
}


