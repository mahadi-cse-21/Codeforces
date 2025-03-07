#include <bits/stdc++.h>

using namespace std;

int main()
{

        int n,m;
        cin >> n ;
        cin>>m;

        map<string,int>mpc,mpcn;
        map<string,string>mp;

        for (int i = 0; i < n; i++)
        {
            string a,b;
            cin>>a>>b;
            mp[a]=b;
        }

        int count = 0;
        while(m--)
        {
            string b;
            cin>>b;
            mpc[b]++;
            mpcn[mp[b]]++;

        }
        string an ;
        auto it = mpc.begin();
        int ans1 = it->second;
        an = it->first;
        for(auto it : mpc)
        {
            if(it.second>ans1) { ans1 =it.second; an = it.first;}
        }
        auto it1 = mpcn.begin();
        int ans2 = it1->second;
        string an2 = it1->first;
        for(auto it : mpcn)
        {

            if(it.second>ans2) {  ans2 =it.second; an2 = it.first; }
        }
        cout<<an2<<endl<<an;
    return 0;
}

