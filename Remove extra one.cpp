#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    multiset<int>s,v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.insert(a);
    }

        int min = INT_MAX;
       auto  it = v.begin();
       it++;

        for(;it!=v.end();it++)
        {
            auto it1 = it;
            it1--;
            if(*it1<*it) s.insert(*it);
        }

       for(auto it: s)
       {
           if(s.find(it)!=s.end()) { v.erase(it);}

       }
        for(auto it: v)
       {
           cout<<it<<endl;

       }

    return 0;
}
