#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        if(k==0) cout<<0;
        else if(n*p < abs(k)) cout<<-1;
        else
        {
            int ans = (abs(k)+p-1)/p;
            cout<<ans;
        }
        cout<<endl;
    }
}