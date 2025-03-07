#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) one++;
        if(a[i]==2) two++;
        if(a[i]==3) three++;
        if(a[i]==4) four++;
       // sum=sum+a[i];
    }
    int res=four+three+two/2+two%2;
    one = one-three;
    one=one-2*(two%2);
   if(one>0) res=res+one/4;
    one=one%4;
    if(one>0) res++;
    cout<<res;
    
    return 0;
}