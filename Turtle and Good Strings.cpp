#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]!=s[s.size()-1])
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
