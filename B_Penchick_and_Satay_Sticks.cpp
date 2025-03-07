#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int tmp=0;
        for(int i=0;i<n-1; i++)
        {
            if(i==0 && a[i]-a[i+1]>=2)
            {
                tmp=1;
            }
            else if(a[i]-a[i+1]>=2 && a[i]-a[i-1]>=2)
            {
                tmp=1;
            }
        }
        if(tmp==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}