#include<bits/stdc++.h>
using namespace std;
int countValidTriplets(vector<int>& a, vector<int>& b, vector<int>& c) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int count = 0;
    int n = a.size();
    int m = b.size();
    int p = c.size();

    for (int j = 0; j < m; j++) {
        int ai = 0;
        int ci = 0;

        while (ai < n && a[ai] <= b[j]) ai++;
        while (ci < p && c[ci] < b[j]) ci++;

        count += ai * (p - ci);
    }

    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int as,bs,cs;
        cin>>as;
        int a[as];
        for(int i=0; i<as; i++)
        {
            cin>>a[i];
        }
        cin>>bs;
        int b[bs];
        for(int i=0; i<bs; i++)
        {
            cin>>b[i];
        }
        cin>>cs;
        int c[cs];
        for(int i=0; i<cs; i++)
        {
            cin>>c[i];
        }
        int count=0;
        for(int i=0;i<as;i++)
        {

            for(int j=i;j<bs;j++)
            {
                for(int k=j;k<cs;k++)
                {

                    if(a[i]<=b[j]&&b[j]<=c[k]) count++;
                }
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
