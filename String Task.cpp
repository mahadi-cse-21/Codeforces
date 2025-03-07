#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);

    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a') continue;
        else if(s[i]=='e') continue;
        else if(s[i]=='i') continue;
        else if(s[i]=='o') continue;
        else if(s[i]=='u') continue;
        else if(s[i]=='y') continue;
        else
        {
            a.push_back('.');
            a.push_back(s[i]);
        }
    }
    cout<<a;
    return 0;
}

