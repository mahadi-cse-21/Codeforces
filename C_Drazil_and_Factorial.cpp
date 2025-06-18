#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin>>a;
    string s;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '5' or a[i] == '2' or a[i] == '3' or a[i] == '7')
           
        {
            s.push_back(a[i]);
            
        }
        else if (a[i] =='1')
            continue;
        else if (a[i] == '8')
        {
            s.push_back('2');
            s.push_back('2');
            s.push_back('2');
            s.push_back('7');
        }
        else if (a[i] == '6')
        {
            s.push_back('3');
            s.push_back('5');
        }
        else if (a[i] == '4')
        {
            s.push_back('2');
            s.push_back('2');
            s.push_back('3');
           
        }
        else if (a[i] == '9')
        {
            s.push_back('7');
            s.push_back('3');
            s.push_back('3');
            s.push_back('2');
        }
    }
   
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s;
   
    return 0;
}