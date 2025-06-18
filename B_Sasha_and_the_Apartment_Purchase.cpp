#include<bits/stdc++.h>
using namespace std;
int f (int a[],int n,int x)
{
   int  sum = 0;
   for(int i=0; i<n; i++)
   {
    sum+=abs(x-a[i]);
   }

    return sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

    }
    return 0;
}