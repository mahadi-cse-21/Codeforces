#include<bits/stdc++.h>

#define IOS  ios_base::sync_with_stdio(0);cin.tie(0) ; cout.tie(0);
#define endl "\n"

using namespace std;

int  main()
{
    IOS;

    set<int>s;
    int n,q;
    cin>>n>>q;
    int tmp=0;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
                s.insert(b);
        }
        else if(a==2)
        {
            int index=-1;
            auto it = s.lower_bound(b);
            if(it!=s.end()&&s.size()!=0)
                index = *it;
        cout<<index<<endl;

        }
    }
    return 0;
}





