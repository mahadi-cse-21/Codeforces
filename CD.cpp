#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        set<int>s;
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        int b = n+m;
        while(b--)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        int k=n+m;

        cout<<k-s.size()<<endl;

    }


    return 0;
}
