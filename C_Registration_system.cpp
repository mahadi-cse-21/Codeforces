#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    while((n--))
    {
        string s;
        cin>>s;
        if(mp[s]==0) 
        {  
            cout<<"OK"<<endl;
            
        }
        else cout<<s<<mp[s]<<endl;
        mp[s]++;

    }
    return 0;
}