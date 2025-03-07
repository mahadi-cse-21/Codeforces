#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans =0;
    ans = pow(2,n/2);
    if(n%2!=0) ans=0;
    cout<<ans;
    return 0;
}