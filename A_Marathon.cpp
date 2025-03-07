#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a[4];
        for(int i=0; i<4; i++)
        {
            cin>>a[i];
        }
        int sum =0;
        for(int i=1; i<4; i++)
        {
            if(a[0]< a[i]) sum++;

        }
        cout<<sum<<endl;
        
    }
    return 0;
}