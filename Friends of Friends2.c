#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   set<int>s;
    for(int i=0;i<n;i++)
    {
        int a,c;
        cin>>a>>c;
        for(int i=0;i<c;i++)
        {
           int k;
           cin>>k;
           s.insert(k);

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


