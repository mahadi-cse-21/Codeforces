#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_gcd=0;
    set<pair<int,int>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(j==i) continue;
            if(a[j]%a[i]==0) count++;

        }
        if(count>=2) s.insert({count,a[i]});
    }
    auto it = s.end();
    it--;
    cout<<it.second;




    return 0;
}

