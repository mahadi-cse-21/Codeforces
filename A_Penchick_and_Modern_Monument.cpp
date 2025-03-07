#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> a;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a[b]++;
        }
        int cnt=0;
        for(auto it : a)
        {
            if(it.second > cnt) cnt = it.second;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}