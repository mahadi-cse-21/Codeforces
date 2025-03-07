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
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
       vector<int> v;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<4;j++)
            {
                if(s[i][j]=='#' ) v.push_back(j+1);
            }
        }
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
