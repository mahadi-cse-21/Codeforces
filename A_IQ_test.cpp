#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int odd=0;
    int even =0;
    int ans=0;
    for(int i=0;i< n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) 
        even++;
        
        else odd++;
        
    }
    if(odd>even)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0) 
            { 
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0) 
            { 
                cout<<i+1<<endl;
                break;
            }
        }
    }
    
   

    return 0;
}