#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10001];
int visited[10000000];
int par[100000];
int  bfs(int a,int b)
{
    visited[a]=1;
    queue<int>q;
    q.push(a);
    int count=0;
    par[a]=0;
    while(1)
    {
        int u = q.front();
        q.pop();
        if(u>1)  adj[u].push_back(u-1);
        if(2*u>b)  adj[u].push_back(u*2);
        int tmp=0;
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            cout<<" v = "<<v<<endl;
            par[v]=par[u]+1;
            if(v==b)
            {
                return par[v];
                tmp=1;
            }
            //  cout<<" par =  "<<par[v]<<endl;
            if(!visited[v])
            {
                q.push(v);
                visited[v]=1;
            }
        }
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    int count=0;
    while(a!=b)
    {
        if(a>=b)
        {
            a--;
        }
        else  if(b%2==0)
        {
            b=b/2;
        }
        else
        {
            b++;
        }
        count++;

    }
    cout<<count;

    return 0;

}
