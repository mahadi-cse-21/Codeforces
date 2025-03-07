#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int , int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       mp[a]++;
    }
    int maximum=0;
    for(auto it : mp)
    {
        if(it.second>maximum)
        {
            maximum=it.second;
        }
    }
    cout<<maximum;

    return 0;
}
/*
12
1 1 2 2 2 3 3 3 4 4 4 4
*/




