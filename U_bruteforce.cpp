#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int tmp=0;
    while(cin>>n)
    {
        if(n==0)   break;
          if(tmp) cout<<endl;
          tmp=1;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n-5; i++)
        {
            for(int j=i+1; j<n-4; j++)
            {
                for(int k=j+1; k<n-3; k++)
                {
                    for(int x = k+1; x<n-2; x++)
                    {
                        for(int y=x+1; y<n-1; y++)
                        {
                            for(int z=y+1; z<n; z++)
                        {
    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[x]<<" "<<a[y]<<" "<<a[z]<<"\n";
                        }

                        }
                    }
                }
            }
        }

    }
    return 0;
}
