#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
   
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int test = n/15;
        int ans=0;
        
        if(test>0) ans=test*3;
        if(n-test*15>=2) ans+=3;
        else if(n-test*15==1) ans+=2;
        else if(n-test*15==0) ans+=1;
        cout<<ans<<endl;

    }
    return 0;
}