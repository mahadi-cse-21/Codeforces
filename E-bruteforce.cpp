#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k;
    while(cin>>k)
    {
        vector<pair<int,int>>v;
        for(int y =k+1;y<=1000;y++ )
        {
            int x = (y*k)/(y-k);
            if((y-k)*x==k*y && x >=y) v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto it:v)
        {
            cout<<"1/"<<k<<" = 1/"<<it.first<<" + 1/"<<it.second<<endl;
        }
    }
}

