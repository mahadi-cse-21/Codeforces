#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l=0;
    while(t--)
    {
        l++;
        set<pair<int,int>>s;
        int n,r;
        cin>>n>>r;
        int tmp=0;
        for(int i=0; i<r; i++)
        {
            int p,q;
            cin>>p>>q;
            if(s.find({p,q})!=s.end())
            {
                tmp=1;
            }
            s.insert({p,q});


        }
        if(tmp==1) cout<<"Scenario #"<<l<<": "<<"impossible";
        else cout<<"Scenario #"<<l<<": "<<"possible";
        cout<<endl;
    }
    return 0;
}




