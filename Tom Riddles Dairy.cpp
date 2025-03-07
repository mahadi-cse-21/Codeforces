#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {

        string a,b;
        cin>>a;
        if(mp[a]==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        mp[ a]++;
    }

    return 0;
}

