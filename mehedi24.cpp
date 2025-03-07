
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cntu=0,cntl=0;
    int n=s.size();

    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z') cntl++;
    }
    cntu=n-cntl;
    if(cntu==n || cntl==n) cout<<0<<"\n";
    else
    {
        int cnt1=0,cnt2=0,cntA=0,cnta=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]<'a')
                cnt1++;
            else break;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]>='a')
                cnt2++;
            else break;
        }
        for(int i=cnt1+1; i<n-cnt2; i++)
        {
            if(s[i]>='a') cnta++;
            else cntA++;
        }
        int ans=min(cnta,cntA);
        cout<<ans<<"\n";
    }
}
