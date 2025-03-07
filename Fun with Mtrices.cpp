#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l=1;
    while(t--)
    {
        int n;
        cin>>n;
        char a;
        vector<char>v[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a;
                v[i].push_back(a);
            }
        }


        int q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            if(s=="transpose")
            {

                for(int i=0; i<n; i++)
                {
                    for(int j=0+i; j<n; j++)
                    {
                        char tmp=v[i][j];
                        v[i][j]=v[j][i];
                        v[j][i]=tmp;
                    }
                }
            }
            else if(s=="inc")
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        v[i][j]++;
                        if(v[i][j]-48==10)
                        {
                            v[i][j]='0';
                        }
                    }
                }
            }
            else if(s=="dec")
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        v[i][j]--;
                        if(v[i][j]-48==-1)
                        {
                            v[i][j]='9';
                        }
                    }
                }
            }
            else if(s=="row")
            {
                int x,y;
                cin>>x>>y;
                x--;
                y--;
                getchar();
                for(int i=0; i<n; i++)
                {
                    char tmp=v[x][i];
                    v[x][i]=v[y][i];
                    v[y][i]=tmp;
                }
            }
            else if(s=="col")
            {
                int x,y;
                cin>>x>>y;
                x--;
                y--;
                getchar();
                for(int i=0; i<n; i++)
                {
                    char tmp=v[i][x];
                    v[i][x]=v[i][y];
                    v[i][y]=tmp;
                }
            }

        }
        cout<<"Case #"<<l<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        l++;

    }

    return 0;
}
