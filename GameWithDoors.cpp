#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int l,r;
        cin>>l>>r;
        int R,L;
        cin>>L>>R;
        if(l==L&&r==R) cout<<abs(r-L)<<endl;

        else if(l==L)
        {
            cout<<abs(R-r)<<endl;
        }
        else if(R==r)
        {
            cout<<abs(L-l)-1<<endl;
        }
        else cout<<abs(r-L)<<endl;
    }
    return 0;
}
