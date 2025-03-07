#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10000];
vector<int>par[10005];
int visited[10000];
void push()
{
    for(int i=0; i<10000; i++)
    {
        par[i].push_back(i);
    }
}
void clr()
{
    for(int i=0; i<1001; i++)
    {
        visited[i]=0;
        // count_visit[i]=0;
    }

}
void  bfs(int a)
{
    visited[a]=1;
    queue<int>q;
    q.push(a);
    int count=0;
    int tmp=0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            //cout<<v<<" ";
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
    int t;
    cin>>t;
    int l=0;
    while(t--)
    {
        l++;
        int k,n,m;
        cin>>k>>n>>m;
        int a[k+1];
        for(int i=1; i<=k; i++)
        {
            cin>>a[i];
        }
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            adj[v].push_back(u);
        }
        int count=0;
        for(int i=1; i<=n; i++)
        {
            bfs(i);
            int l=0;
            for(int j=1; j<=k; j++)
            {
               // cout<<i<<" "<<a[j]<<" = "<<visited[a[j]]<<" "<<endl;
                if(visited[a[j]]==1)
                {
                    l++;
                    // cout<<" a[j] = "<<a[j]<<" l "<<l<<endl;
                }
            }
            if(l==k)
            {
                count++;
               // cout<<i<<" "<<count<<endl;
            }
            //clr();
        }
        cout<<"Case "<<l<<": "<<count<<endl;
        for(int i=0; i<1001; i++)
        {
            adj[i].clear();
        }
    }
    return 0;

}

