#include <bits/stdc++.h>
using namespace std;

int sumofdigit(string s)
{
    int cnt = 0;
    int size = s.size();
    for(int i=0; i<size ;i++)
    {
        cnt +=s[i]-48;
    }
    return cnt;
}

string newstring(string s)
{
    int temp = 0;
    int size = s.size();
    string test;
    int ch = s[size-1]+1-48;
    size--;
    if(ch>9) temp = 1;
    test.push_back(ch%10+48);
    for(int i=size-1; i>=0; i--)
    {
        int newd = s[i]+temp - 48;
        temp = 0;
        if(newd>9)
        {
            temp =1;
        }

        test.push_back(newd%10+48);
    }
    if(temp) test.push_back('1');
    reverse(test.begin(),test.end());
    
    return test;
}

int main()
{
    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
        return 0;
    }
    
    string num;
    num.push_back('1');
    for(int i=0;i<m-1; i++)
    {
        num.push_back('0');
    }
    string num1 = num;
    string smallest ="0";
    string largest ;
    
    int s1 = s ,s2 = s;
    
    s1--;
    for(int i=m-1; i>0; i--)
    {
        if(s1<=9 )
        {
            num[i]=s1+48;
            s1-=s1;
        }
        else if(s1>9)
        {
            num[i]='9';
            s1-=9;
        }
    }
    
     if(s1+num[0]<='9')
     {

        num[0]=num[0]+s1;
        s1-=s1;
     }
     else {

        cout<<"-1 -1"<<endl;
        return 0;
     }
    
    smallest = num;
    
    for(int i=0; i<m; i++)
    {
        if(s2<=9)
        {
            largest.push_back(s2+48);
            s2-=s2;
        }
        else
        {
            largest.push_back(9+48);
            s2-=9;
        }
    }
    
    if(sumofdigit(smallest)==s and sumofdigit(largest) and s1==0 and s2 ==0)
        cout<<smallest<<" "<<largest<<endl;
    else
        cout<<"-1 -1"<<endl;

    return 0;
}
