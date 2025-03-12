#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int odd=0;
    int even=0;
    long long sum=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        if(a>max)
        {
            max=a;
        }
    }
   if(sum%2==0&& sum>=2*max)
   {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}