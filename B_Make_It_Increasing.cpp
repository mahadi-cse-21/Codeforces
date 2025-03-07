#include<bits/stdc++.h>
using namespace std;
int valid(int a[],int i)
{
    int count=0;
    while(a[i-1]>0 && a[i-1]>=a[i])
    {
        a[i-1]=a[i-1]/2;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
    
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int sum=0;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                
                continue;
            } 
            else 
            {
               sum+= valid(a,i);
              // cout<<a[i]<<" "<<a[i-1]<<endl;
            }
        }
        int ans=sum;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>=a[i+1]) {
                ans=-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}