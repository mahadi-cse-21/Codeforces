#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
     for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
