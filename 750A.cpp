#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, n;
    cin>>a>>n;
    int res=240-n;
    int count=0;
    for(int i=1;i<=a;i++)
    {
        res=res-5*i;
//cout<<res<<" "<<count<<endl;
        if(res<0)
        {
            break;
        }
        else
        {

            count++;
        }

    }
    cout<<count;
    return 0;
}
