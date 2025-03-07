#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,a,b,c;
    cin>>n>>a>>b>>c;
    int ans =0;
    int maxa=0,maxb=0,maxc=0;

    for(int i=0; a*i<=n; i++)
    {
        for(int j=0;a*i+b*j<=n;j++)
        {
            int temp = n-a*i- b*j;
           if(temp%c==0) ans = max(ans, temp/c+i+j);
        }
    }
  cout<<ans;
    return 0;
}