#include<bits/stdc++.h>
using namespace std;
int valid(int a[],int i)
{
    int count=0;
    while(a[i-1]>0 )
    {
        a[i-1]=a[i-1]-1;
         a[i]=a[i]-2;
          a[i+1]=a[i+1]-1;
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
        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]==0)
            {
                
                continue;
            } 
            else 
            {
               sum+= valid(a,i);
              // cout<<a[i]<<" "<<a[i-1]<<endl;
            }
        }
    string ans ="YES";
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) {
                ans="NO";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}