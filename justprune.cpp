#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        multiset<int>mp[2];
        int n,m;
        cin>>n>>m;
        while(n--)
        {
            int a;
            cin>>a;
            mp[0].insert(a);
        }
        while(m--)
        {
            int a;
            cin>>a;
           mp[0].insert(a);
        }
        int x = mp[0].size();
        int y = mp[1].size();
       // cout<<x<<y<<endl;
        auto it0 = mp[0].begin();
        auto it1 = mp[1].begin();
        int count=0;
        while(it0!=mp[0].end()&&it1!=mp[1].end())
        {
            if(*it0==*it1)
            {
                it0++;
                it1++;
               // cout<<" = "<<count<<endl;
            }
            else if(*it0<*it1)
            {
                count++;
                it0++;
                //cout<<" < "<<count<<endl;
            }
            else
            {
                count++;
                it1++;
                //cout<<" > "<<count<<endl;
            }

        }
        for(; it0!=mp[0].end(); it0++)
        {
            count++;
            //cout<<" 0 "<<count<<endl;
        }
        for(; it1!=mp[1].end(); it1++)
        {
            count++;
            //cout<<" 1 "<<count<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}
/*
vjudge problem
1
6 7
1 4 5 6 7 8
1 3 4 5 6 8 9
*/

