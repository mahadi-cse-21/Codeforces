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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int s = n+1;
        for(int i=0;i< n; i++)
        {
            cout<<s-a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}