#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long>p,a,b;
    set<long long> v[4];
    map<long long,pair<int,int>>mp;

    for(int i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        p.push_back(a);
    }
    for(int i=0; i<2*n; i++)
    {
        int l;
        cin>>l;
        v[l].insert(p[i%n]);
    }


    int in=0;

    int buyer;
    cin>>buyer;
    for(int i=0; i<buyer; i++)
    {
        int k;
        cin>>k;
       auto it = v[k].begin();
       int ans = *it;
       for(int i=1;i<=3;i++)
       {
           v[i].erase(ans);
       }
       cout<<(ans?ans:-1)<<" ";
    }
    return 0;
}
