#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<long long,int>>v1,v2;
    for(int i=0;i<n;i++)
    {
        long long  a;
        cin>>a;
        v1.push_back({a,i});
    }
     for(int i=0;i<m;i++)
    {
        long long  a;
        cin>>a;
        v2.push_back({a,i});
    }
    auto ita = v1.begin();
    auto itb = v2.begin();
    set <long long>se;
    set < pair<int,int> > s;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
//    while(s.size()<(n+m-1))
//    {
//        long long a = ita->first+itb->first;
//        if(se.find(a)==se.end())  { se.insert(a); s.insert({ita->second,itb->second}); }
//        itb++;
//        if(itb==v2.end()) {  itb = v2.begin();ita++;}
//    }
//    for(auto it : s)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
for(int i=0;i<m;i++)
    {
       cout<<v1[0].second<<" "<<v2[i].second<<endl;
    }
     for(int i=1;i<n;i++)
    {
         cout<<v1[i].second<<" "<<v2[m-1].second<<endl;
    }

    return 0;
}
