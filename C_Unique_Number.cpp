#include<bits/stdc++.h>
using namespace std;
vector<int>  isdistinct(int n)
{
    int o=9;
    vector<int> v;
    while(o>0)
    {
        n=n-o;
        if(n>=0) v.push_back(o);
        else n=n+o;
        
        o--;
    }
    if(n!=0) 
    {
        v.clear();
        v.push_back(-1);
    } 
    return v;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int tmp=0;
        vector<int> vc;
        vc=isdistinct(n);
      //  vc.reserve(vc.size());
 
        for(int i=vc.size()-1;i>=0;i--)
        {
            cout<<vc[i];
        }
        cout<<endl;
    }
    return 0;
}