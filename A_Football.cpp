#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1 ="0000000",s2="1111111";
    int temp=0;
    for(int i=0;i<s.size()-7;i++)
    {
        if(s1[0]==s[i])
        {
            int cnt=0;
            for(int j=0;j<7;j++)
            {
                if(s[i+j]==s1[j]) cnt++;
            }
            if(cnt==7) temp=1;
        }
         if(s2[0]==s[i])
        {
            int cnt=0;
            for(int j=0;j<7;j++)
            {
                if(s[i+j]==s2[j]) cnt++;
            }
            if(cnt==7) temp=1;
        }
    }
    if(temp==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}