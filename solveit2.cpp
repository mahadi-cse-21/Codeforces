
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n>>q;
    int a[n+1];
    int tmp=0;
    for(int i=1;i<=n;i++)
    {
        a[i]=0;
    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1) a[b]=-1;
        else if(a==2) {
                int index=-1;
            if(it->second>=b && it->first==-1) index=it->second;
            cout<<index<<endl;
        }

    }


    return 0;
}





