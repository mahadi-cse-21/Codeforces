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
        int a=0,f=0;    
        while (n>0)
        {
            if(n==1)
            {
                f=1;
                break;
            }
            if(n%2==0)
            {
                n=n-1;
            }
            else n=n/n;
           // cout<<n<<endl;
            if(n==1)
            {
                a=1;
                break;
            }
            if(n%2==0)
            {
                n=n-1;
            }
            else n=n/n;
           // cout<<n<<endl;

            
            

        }
        if(a==1) cout<<"Ashishgup"<<endl;
        else if(f==1) cout<<"FastestFinger"<<endl;
        
    }
    return 0;
}