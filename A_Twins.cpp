#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
     sum2 = sum2+a[i];
    }
   
    sort(a,a+n);
    int tmp=0;
    for(int i=n-1;sum1<=sum2;i--)
    {
     if(sum1<=sum2)
     {
        sum1=sum1+a[i];
        sum2=sum2-a[i];
        tmp++;
     }
    }
   // cout<<sum1<<endl;
cout<<tmp;
    return 0;
}