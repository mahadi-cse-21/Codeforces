#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n ;
        cin>>n;
        n--;
        string s;
        cin>>s;
        
        vector<int> ans;
        ans.push_back(1);
        int cnt =2;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='<')
            {
                ans.insert(ans.begin(),cnt);
            }
            else
            {
                ans.push_back(cnt);
            }
            cnt++;
        }
        for(int i=0; i<ans.size()-1; i++)
        {
           if(s[i]=='<' && ans[i+1]>ans[i])
           {
            swap(ans[i],ans[i+1]);
           }
           else if(s[i]=='>' and ans[i+1]<ans[i])
           {
            swap(ans[i],ans[i+1]);
           }
        }
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
       
    }
    return 0;
}