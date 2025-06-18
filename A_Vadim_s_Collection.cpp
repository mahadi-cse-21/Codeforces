#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        cout<<9;
        mp['9']--;
        for(int i=1; i<10; i++)
        {

            for(int j=0; j<=9; j++)
            {
                char k = j+48;
                if(mp[k]>0 and j>=10-i-1)
                {
                 cout<<j;
                 mp[k]--;
                 break;
                }
            }
        }
        cout<<endl;
    }
}