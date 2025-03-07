#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,n,q;
        cin>>m>>n>>q;
        string s[m];
        for(int i=0; i<m; i++)
        {

            cin>>s[i];
        }

        cout<<m<<" "<<n<<" "<<q<<endl;
        while(q--)
        {

            int x,y;
            cin>>y>>x;
            int cnt =1;
            char center = s[y][x];
            while(1)
            {
                int tmp=0;
                if((x-cnt)<0|| (y-cnt)<0||(x+cnt)>n-1 || (y+cnt)>m-1)
                {

                    break;
                }

                for(int i=y-cnt; i<=y+cnt; i++)
                {
                    if(tmp==1)
                    {
                        break;
                    }
                    for(int j=x-cnt;j<=x+cnt;j++)
                    {
                        if(s[i][j]!=center){
                            tmp=1;
                            break;
                        }
                    }
                }
                if(tmp==1) break;
                cnt++;
            }
            cnt--;
            int len = 1+2*cnt;
            cout<<len<<endl;
        }

    }
    return 0;
}
