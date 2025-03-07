#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cout<<endl;
    while(tc--)
    {

        long long a ;
        cin>>a;
        int line=0;
        for(long long i=1;i<=9876543210;i++)
        {
            long long b = a*i;
            string is = to_string(i);
            string bs = to_string(b);
            int ans[10]={0};
            int tmp=0;
            for(int j=0;j<10;j++ )
            {
                int d = is[j]-'0';
                ans[d]++;
                if(ans[d]>1) tmp=1;
            }
            int tmp1=0;
            ans[10]={0};
            for(int j=0;j<10;j++ )
            {
                int d = bs[j]-'0';
                ans[d]++;
                if(ans[d]>1) tmp1=1;
            }

            if(tmp1==1||tmp==1) continue;
            else{
                    if(line) cout<<endl;
                    line=1;
                cout<<bs<<" / "<<is<<" = "<<a;
            }

        }
    }
    return 0;
}
