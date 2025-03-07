#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int l=1;

    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[26]={0};
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[s[i]-'A']) ans++;
            a[s[i]-'A']++;
            if(i-k>=0) a[s[i-k]-'A']--;
        }
        cout<<"Case "<<l<<": "<<ans<<"\n";
        l++;
    }
}
