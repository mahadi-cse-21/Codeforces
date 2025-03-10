#include<bits/stdc++.h>
using namespace std;

 int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int a[n];
        double sum=0;
        int even = 0, odd = 0;
        int sumOfOdd=0, sumOFEven=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
          
            sum+=a[i];
        }
        double ans = sum/(double)n;
        if(sum/n==x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}