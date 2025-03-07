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
        if(n%2021==0) cout<<"YES";
        else if(n%2020==0) cout<<"YES";
        else
        {
            int temp=0;
            for(int i=1; i<=1000; i++)
            {
                if(n<2020) break;
                int k=(n-(i*2021));
                int l=(n-(i*2020));
                if(k%2020==0&&k>0)
                {

                    temp=1;
                    break;
                }
                else if(l%2021==0&&l>0)
                {
                    temp=1;
                    break;
                }

            }
            if(temp==0) cout<<"NO";
            else
                cout<<"YES";

        }
        cout<<endl;
    }
    return 0;
}


