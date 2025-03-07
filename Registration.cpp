#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {

        string a,b;
        cin>>a;

        if(mp[a]==0)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<a<<mp[a]<<"\n";
        }
         mp[a]++;

    }

    return 0;
}


