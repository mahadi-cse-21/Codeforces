#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int m;
        cin>>m;
        map<int,int> mp;
        for(int i=0;i<m;i++)
        {

            int b;
            cin>>b;
            mp[b]++;
        }
        int max =0;
         for(auto it:mp)
        {

            if(it.second>max)
            {

                max= it.second;
            }
        }
        cout<<m-max<<endl;

    }
    return 0;
}
