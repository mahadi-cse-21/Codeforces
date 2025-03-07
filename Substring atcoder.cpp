#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    int max =0;
    for(int i=0;i<s.size();i++)
    {
        int count = 0;

        for(int j=0;j<p.size()&&(s.size()-i)>=p.size();j++)
        {
            if(p[j]==s[i+j]) count++;
        }
        if(count>max) max = count;
    }
    cout<<p.size()-max;

    return 0;
}
