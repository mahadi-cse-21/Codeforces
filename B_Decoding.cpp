#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string v;
    for(int i=0;i<n;i++) v.push_back('0');
    int start=0;
    int end = n-1;
    bool st=false;
    bool en=true;
    int len=s.size()-1;
    while(!s.empty())
    {
        len = s.size()-1;
        if(st) 
        {
            v[start]=s[len];
            en=true;
            st=false;
            start++;
        }
        else 
        {
            v[end]=s[len];
            st=true;
            en=false;
            end--;
        }
    s.erase(len,1);

    
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }

    return 0;
}