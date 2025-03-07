#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int max=0;
        int index;
        for(int i=1;i<n;i++)
        {
            if(max<gcd(n,i)+i)
            {
                max=gcd(n,i)+i;
                index=i;
            }
        }
        cout<<index<<endl;

    }
    return 0;
}
