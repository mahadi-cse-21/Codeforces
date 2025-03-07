#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, n;
    cin>>a>>n;
    int arr[a];
    for(int i=0;i<a;i++)
    {
     cin>>arr[i];
    }
    sort(arr,arr+a);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            sum=sum+abs(arr[i]);
        }
    }
    cout<<sum;
    return 0;
}

