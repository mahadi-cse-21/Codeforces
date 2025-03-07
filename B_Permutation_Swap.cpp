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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[abs(i+1-a[i])]++;
        }
        mp[0]=0;
        int max = mp.begin()->second;
        int ans = mp.begin()->first;
        
        for(auto it:mp)
        {
            if(it.second>max)
            {
                max=it.second;
                ans = it.first;
            }
        }
        if(ans==1 &&  mp[2]==1 && mp[1]==1) ans = 2;
        cout<<ans<<endl;
    }
    return 0;
}