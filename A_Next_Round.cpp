#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int p[a];
    for(int i=0;i<a;i++)
    {
        cin>>p[i];
    }
    int res = p[b-1];
    int cnt=0;
    for(int i=0;i<a;i++)
    {
        if(p[i]>=res and p[i]>0)
        {
           cnt++;
        }
    }
    cout<<cnt;
    return 0;
}