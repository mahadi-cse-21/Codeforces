#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int ans=(m+1)/2;
        int b=m/2;

        if(l<=(0-ans) && ans<=r) cout<<0-ans<<" "<<0+b<<endl;
        else if(l>0-ans) cout<<l<<" "<<(m-abs(l))<<endl;
        else if(r>=0+ans && (0-ans)>=l) cout<<0-b<<" "<<0+ans<<endl;
        else if(r<0+ans) cout<<0-(m-r)<<" "<<r<<endl;


    }

    return 0;
}