#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    int i=0;
    vector<char>v;
    for(int i=s.size(); i>=0; i--)
    {
        if(s[i]==s[i+1]) s.erase(i,2);
    }
  cout<<s;


    return 0;
}

