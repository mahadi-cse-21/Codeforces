#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
     string a,b;
     cin>>a>>b;

      int count=0;
      int index=0;
    for(int i=0;i<b.size();i++)
    {
        if(a[index]==b[i])
        {
            count++;
            index++;
        }
    }
    cout<<count<<endl;


    }
    return 0;
}

