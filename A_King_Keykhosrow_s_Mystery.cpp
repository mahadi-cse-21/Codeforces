#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int res = (a*b)/__gcd(a,b);
        cout<<res<<endl;
    }
    return 0;
}