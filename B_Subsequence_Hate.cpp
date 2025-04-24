#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        string s1 = "101";
        string s2 = "010";
        int i1 = 0,i2=0;
        int ones =0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1' )  ones++;
            if(s1[i1]==s[i])
            {
                i1++;
            }
            if(s2[i2]==s[i])
            {
                i2++;
            }
        }
        if(i1!=s1.size() && i2!=s2.size())
        {
            cout<<"0"<<endl;
        }
        else
        {
            int zeros = s.size() - ones;
            cout<<min(ones,zeros)<<endl;
        }
        

       

    }
    return 0;
}