#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int time=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {

            int l,r;
            cin>>l>>r;
            if(l>time) time = l;
            if(time<=r) {
                cout<<time<<" ";
                time++;
            }
            else cout<<"0";
            cout<<endl;
        }

    }

    return 0;
}
