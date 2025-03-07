#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        unsigned long long n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        unsigned long long sz = s.size();
        unsigned long long count=0;
        unsigned long long i=0;
        while(k-- && i!=sz)
        {
            
            if(s[i]=='L') x--;
            else x++;
            if(x==0) 
            {
                count++;
                i=0;
                
            }
            else i++;
            
        }
        cout<<count<<endl;
       
    }
    return 0;
}