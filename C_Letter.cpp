#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    string s2=s;
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
        if( s[i]>='A' && s[i]<='Z')
        {
            s2[i]='0';
        }
        else
        break;
    }
    
    for(int i=sz-1; i>=0; i--)
    {
        if( s[i]>='a' && s[i]<='z')
        {
            s2[i]='0';
        }
        else
        break;
    }
    int i=0;
    string s1;
   for(int i=0; i<s2.size(); i++)
   {
       if(s2[i]=='0')
       {

       }
       else{
        s1.push_back(s[i]);
       }

   }
   int cnt=0;
   bool sm = true, bg = true;
   for(int i=0; i<s1.size(); i++)
   {
    if( s[i]>='a' && s[i]<='z' && sm ==true)
    {
        
    }
   }
    cout<<s1;
    return 0;
}
