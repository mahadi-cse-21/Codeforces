#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s<s1) {
            cout<<"YES"<<endl;
            continue;
        }
        
       
        int j = 0 ;
        for(int i=0; i<n && k>0; i++)
        {
            if(i==n-i-1) break;
            if(s1[j]>s[i] and j!=i)
            {
                cout<<"k - >" <<k<<endl;
                swap(s[i],s1[j]);
                k--;
                j++;
            }
           
        }
        
        cout<<s1<< " "<<s<<endl;;
        if(s<s1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}