#include<bits/stdc++.h>
using namespace std;
pair<int,int>p;
bool compare1(pair<int, int>p1,pair<int, int>p2)
{
    if(p1.first>p2.first) return true;
    else if(p1.first==p2.first)
    {
        if(p1.second<=p2.second) return true;
        else return false;
    }
    else
        return   false;
}
void sort(  vector<pair<int, int>>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); i++)
        {
            if( compare1(v[i],v[j])==0)
            {
                p=v[i];
                v[i]=v[j];
                v[j]=p;

            }
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int, int>>v,v1;
    map<pair<int,int>,int>mp;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        mp[{a,b}]++;
    }
    sort(v.begin(),v.end(),compare1);
  cout<<  mp[v[k-1]];
    return 0;
}
