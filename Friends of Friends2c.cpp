#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    int a[n];
    int j=0;
    for(int i=0; i<n; i++)
    {
        int c;
        cin>>a[j++]>>c;
        for(int i=0; i<c; i++)
        {
            int k;
            cin>>k;
           s.insert(k);

        }
    }
       for(auto it : a)
    {
        if(s.find(it)!=s.end()) s.erase(s.find(it));
    }

    cout<<s.size();

    return 0;
}



