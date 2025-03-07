#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b%a==0) return a;
    return gcd(b%a,a);
}
int main()
{
    int s[1001]={};
    s[0]=1;
    s[1]=1;
    for(int i=4;i<=1000;i++)
    {
        if(i%2==0) s[i]=1;
    }
    for(int i=3;i*i<=1000;i+=2)
    {
        for(int j=i*i;j<=1000;j=j+2*i)
        {
            s[j]=1;
        }
    }
    vector<int>v;
    for(int i=0;i<=1000;i++)
    {
        if(s[i]==0) v.push_back(i);
    }

    int t;
    cin>>t;
    while(0)
    {
        int l,r;
        cin>>l>>r;
        int count = 0;
        vector<int>v;
        for(int i=l;i<=r;i++)
        {
            v.push_back(l);

        }
        while()
    }

    return 0;
}
