#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int res=0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a;
        mp[a]++;
    }
    for(auto it : mp)
    {
        if(it.first<it.second) res=res+it.second-it.first;
        else if(it.first>it.second) res=res+it.second;
      //  cout<<it.first<<it.second<<endl;
    }
    cout<<res;

    return 0;
}




