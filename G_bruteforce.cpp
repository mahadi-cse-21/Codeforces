#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        while(n--)
        {

            int a;
            cin>>a;
            v.push_back(a);
        }
        int max = v[0];
        int res = v[0]-v[1];
        for(int i=1;i<v.size();i++)
        {
            if(res<(max-v[i])) res = max-v[i];
            if(v[i]>max) max = v[i];


        }
        cout<<res<<endl;

    }
    return 0;
}

