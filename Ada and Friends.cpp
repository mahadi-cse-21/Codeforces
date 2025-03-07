#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long Q,k;
    cin>>Q>>k;

   map<string,long long >mp;
    multiset<long long>s;
    priority_queue<long long>q;
    int l=0;
    while(Q--)
    {
        string a;
        long long b;
        cin>>a>>b;
        if(mp[a]==0) mp[a] = b;
        else mp[a]+=b;
    }

    for(auto & it:mp)
    {
        s.insert(it.second);

    }
//    for(auto it : mp2)
//    {
//        cout<< it.first<<" "<<it.second<<endl;
//    }
    long long ans = 0;
while(k>0&&!s.empty()) { auto it =s.end();it--; ans=ans+*it;s.erase(it);k--;}
//    for(auto it =mp2.rbegin(); k>0&&it!=mp2.rend(); it++,k--)
//    {
//        ans=ans+it->first;
//    }
    cout<<ans;

    return 0;
}

