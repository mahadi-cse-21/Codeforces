#include<bits/stdc++.h>
using namespace std;
int lessOrEqual(int a[],int b,int n)
{
    int left = 0;
    int right = n-1;

    int mid = (left+right)/2;
    while (left<right)

    {
        if(a[mid]<=b)
        {
            left=mid+1;
        }
        else right=mid;
        mid=(left+right)/2;
    }
    return mid;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i <n;i++)
    {
        
        cin>>a[i];
        
    }
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
        int b;
        cin>>b;
        int res  = lessOrEqual(a,b,n);
        if(a[res]==b || a[n-1]<b) res++;
        cout<<res<<endl;

    }

    return 0;
}