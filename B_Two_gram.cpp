#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    map<int,string>mp2;
    for(int i=0;i<s.size()-1;i++)
    {
      
            string as ="";
            as=as+s[i]+s[i+1];          
            mp[as]++;
           // cout<<as<<" "<<mp[as]<<endl;    
    }
    int cnt=0;
    string ans;
    for(auto it:mp)
    {
        if(it.second>cnt)
        {
            cnt=it.second;
            ans=it.first;
        }
    }
    cout<<ans;
    return 0;
}

