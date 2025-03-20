#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long x ;
        cin>>x;
      
        if(x>=111*(x%11)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}