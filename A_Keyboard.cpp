#include <bits/stdc++.h>
using namespace std;
int find(char c, string s)
{
    int ans = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (c == s[i])
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    for (int i = 0; i < s.size(); i++)
    {


        if (c == 'R')
        {
            char p = s[i];
            int index;
            index = find(p, s1);
            if (index != -1)
            {
                
                    s[i] = s1[index - 1];
            }
            else
            {
                index = find(p, s2);
                if (index != -1)
                {
                   
                        s[i] = s2[index - 1];
                }
                else
                {
                    index = find(p, s3);
                    if (index != -1)
                    {
                        
                            s[i] = s3[index - 1];
                    }
                }
            }
        }
        else if (c == 'L')
        {
            char p = s[i];
            int index;
            index = find(p, s1);
            if (index != -1)
            {
               
                    s[i] = s1[index + 1];
            }
            else
            {
                index = find(p, s2);
                if (index != -1)
                {
                  
                        s[i] = s2[index + 1];
                }
                else
                {
                    index = find(p, s3);
                    if (index != -1)
                    {
                       
                            s[i] = s3[index + 1];
                    }
                }
            }
        }
    }
    cout<<s;
    return 0;
}