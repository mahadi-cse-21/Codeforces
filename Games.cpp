#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int ,int >>vp;
    for(int i=0;i<n;i++)
    {

    int a,b;
    cin>>a>>b;
    vp.push_back({a,b});
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(vp[i].first==vp[j].second) res++;
        }
    }
    cout<<res;
    return 0;
}
