#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    cin>>x;
    int y;
    cin>>y;
    v.erase(v.begin()+x-1,v.begin()+y-1);
    cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

