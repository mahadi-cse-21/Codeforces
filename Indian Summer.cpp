#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<string,string>,int>mp;
    int res=0;
    for(int i=0; i<n; i++)
    {

        string a,b;
        cin>>a>>b;

        if(mp[{a,b}]==0)
        {
            res++;
        }
        mp[{a,b}]++;

    }
    cout<<res;

    return 0;
}



