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
        int b[n];
        map<int,int>mpa,mpb;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mpa[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            mpb[b[i]]++;
        }
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            int p = a[i]+b[i];
            mp[p]++;
        }
        if(mp.size()>=3 || (mpa.size()>=2 && mpb.size()>=2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
             cout<<"NO"<<endl;
        }
    }
    return 0;
}