#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
    }
    int surja=0;
    int dima=0;
    while(v.size())
    {
        int siz=v.size()-1;
        if(v[0]>v[siz])
        {
            surja+=v[0];
            v.erase(v.begin()+0);
        }
        else
        {
            surja+=v[siz];
            v.erase(v.end()-1);
        }
        siz=v.size()-1;
        if(siz>=0)
        {


            if(v[0]>v[siz])
            {
                dima+=v[0];
                v.erase(v.begin()+0);
            }
            else
            {
                dima+=v[siz];
                v.erase(v.end()-1);
            }
        }
    }
    cout<<surja<<" "<<dima;

    return 0;
}


