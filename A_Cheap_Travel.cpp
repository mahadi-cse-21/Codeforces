#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int norm = m*a;
    int special = b;
    int ans = min(n*a,((n/m)*b+min((n%m)*a,b)));
    cout<<ans<<endl;

    return 0;
}