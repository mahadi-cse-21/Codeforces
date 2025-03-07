#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    int cnt=0;
    string ans;
    for(auto it:mp)
    {
        if(it.second>cnt)
        {
            cnt=it.second;
            ans=it.first;
        }
    }
    cout<<ans;
    return 0;
}