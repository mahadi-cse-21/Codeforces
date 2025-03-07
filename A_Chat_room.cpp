#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    string hello="hello";
    int j=0;
    while(i!=s.size())
    {
        if(s[i]==hello[j])
        {
            j++;
        }
        i++;
    }
    if(j==hello.size()) cout<<"YES";
    else cout<<"NO";
    return 0;
}