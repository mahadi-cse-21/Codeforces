#include<bits/stdc++.h>
using namespace std;

int count(string s)
{
    int cnt =0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1') cnt++;
    }
    return cnt;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        int sum =0;
        for(int i=0; i<n; i++ )
        {
            s1 = s;
            if(s[i]=='1') s1[i]='0';
            else if(s[i]=='0') s1[i]='1';
            sum+=count(s1);
        }
        cout<<sum<<endl;


    }
    return 0;
}