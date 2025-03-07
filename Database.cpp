#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l=1;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        int tmp=0;
        map<pair<int,int>,int>mp,mp1;
        for(int i=0; i<r; i++)
        {
            int a,b;
            cin>>a>>b;
            mp[{a,b}]++;
            if(mp[{a,b}]>1) tmp=1;
        }
        if(tmp==0) cout<<"Scenario #"<<l++<<": possible"<<endl;
        else cout<<"Scenario #"<<l++<<": impossible"<<endl;
    }
    return 0;
}


