#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , t;
    cin >> n >> t;
    int a[n];
    int sum =0; 
    int cnt =0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(sum+a[i]<=t)
        {
            sum = sum +a[i];
            cnt++;
        }
        else break;
        
    }
    
    cout<<cnt<<endl;
    return 0;
}