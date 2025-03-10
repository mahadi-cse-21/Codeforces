#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int even =0, odd =0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(x%2==0 and odd==n) 
        {
            cout<<"No"<<endl;
            continue;
        }
        if(odd%2==0)
          odd--;
        if(odd<0) cout<<"No"<<endl;
        
        else
        {
           int ans = x - odd;
           if(ans==0) cout<<"Yes"<<endl;
           else if(ans<=even)
           {
            cout<<"Yes"<<endl;
           }
           else
           cout<<"No"<<endl;

        }
    }
    return 0;
}