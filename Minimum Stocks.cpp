#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<pair<long long,string>>mp;

    int l=0;
    while(n--)
    {
        l++;

        int ins;
        cin>>ins;
        if(ins==1)
        {

            string a;
            long long b;
            cin>>a;
            cin>>b;
            mp.insert({b,a});
        }
        else if(ins==2)
        {

            string a;
            long long b;
            cin>>a;
            cin>>b;
            for(auto it:mp)
            {

                if(it.second==a)
                {
                    mp.erase(it);
                    break;
                }
            }
            mp.insert({b,a});


        }
        else
        {

            string buy;
            cin>>buy;

            auto it = mp.begin();
            cout<<it->second<<" "<<l<<endl;
            mp.erase(it);
        }
    }
    return 0;
}

