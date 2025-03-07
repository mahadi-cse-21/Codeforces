#include<bits/stdc++.h>
using namespace std;
long long countingPrefix(long long a[],long long x,long long y)
{
    sort(a+x,a+y);
    long long sum=0;
    for(int i=x; i<y-1; i++)
    {
      sum+=a[i];
    }
    if(sum==a[y-1]) return 1;
    return 0;
} 
int main()
{
    int tc; 
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long ans=0,max1=0,sum=0;
        for(long long i=0; i<n;i++)
        {
            max1=max(max1,a[i]);
            sum=sum+a[i];
         if(sum==2*max1) ans++;
        }
        //if(a[0]==0) ans=ans+1;
        cout<<ans<<endl;

    }
    return 0;
}