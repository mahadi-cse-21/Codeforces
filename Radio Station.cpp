#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    map<string ,string>mp;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[b]=a;

    }
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        cout<<a<<" "<<b;
        b.erase(b.end()-1);
     cout<<" #"<<mp[b]<<endl;

    }

    return 0;
}
