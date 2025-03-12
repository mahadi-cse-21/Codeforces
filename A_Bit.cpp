#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;

        s[i]=str;
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
       if(s[i][0]=='+' || s[i][1]=='+')
       {
           count++;
       }
       else if(s[i][0]=='-' || s[i][1]=='-')
       {
           count--;
       }
    }
    cout<<count;
    return 0;
}