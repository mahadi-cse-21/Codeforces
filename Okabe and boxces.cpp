#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=2*n;
    multiset<int>s;
    vector<int>v;
    int count = 0;
    while(n--)
    {
        string a ;
        cin>>a;
        if(a=="add")
        {

            int b;
            cin>>b;
            s.insert(b);
            v.push_back(b);
        }
        else
        {

            auto it = s.begin();
            auto it1 =v.end();
            it1--;

            if(*it==*it1)
            {
                v.erase(it1);
                s.erase(it);
            }
            else
            {

                sort(v.rbegin(),v.rend());
                if(v.size()>0) count++;
            }

        }

    }
    cout<<count;

    return 0;
}
