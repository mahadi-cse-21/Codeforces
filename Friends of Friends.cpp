#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int ,int>mp,mp1;
    for(int i=0;i<n;i++)
    {
        int a,c;
        cin>>a>>c;
        int b[c];

        mp1[a]++;
        for(int i=0;i<c;i++)
        {
            cin>>b[i];
            mp[b[i]]++;
        }

    }
    int count=0;
    for(auto it: mp)
    {
        int tmp=0;
       for(auto it1:mp1)
       {
           if(it1.first==it.first)
           {
               tmp=1;
               break;
           }
       }
       if(tmp==0) count++;

    }
   cout<<count;
    return 0;
}

