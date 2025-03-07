#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int m;
    cin>>m;
    int g[m];
    for(int i=0;i<m;i++)
    {
        cin>>g[i];
    }

    int cnt=0;
    vector<pair<int,int>>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(b[i]-g[j]==1))
            {
                mp.push_back({b[i],g[i]});
            }
        }
    }
    cout<<mp.size();
    return 0;
}