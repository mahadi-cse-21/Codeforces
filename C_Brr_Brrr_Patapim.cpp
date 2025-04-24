#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n+1][n+1];
        vector<int> v;
       
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>a[i][j];
            }
        }

        int b[2*n+1]={0};
        int c[2*n+1]={0};
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(b[i+j]==0)
                {
                    b[i+j]=a[i][j];
                 c[b[i+j]]=1;
                    
                }
            }
        }
       
        for(int i=1; i<=2*n ; i++)
        {
            if(c[i]==0)
            {
                v.push_back(i);
            }
        }
        int j=0;
        for(int i=1; i<=2*n ; i++)
        {
            if(b[i]==0)
             { 
                b[i] = v[j];
                j++;
             }
        }
        for(int i=1; i<=2*n ; i++)
        {
           cout<<b[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}