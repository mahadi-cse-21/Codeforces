#include<bits/stdc++.h>
using namespace std;
vector<int>adj[101];
int visited[101];
vector<int>ordered;
void dfs(int a)
{
    visited[a]=1;

    for(int i=0; i<adj[a].size(); i++)
    {
        int b = adj[a][i];
        if(visited[b]==0) dfs(b);
    }
    ordered.push_back(a);
}
void clear(int n)
{
    ordered.clear();
    for(int i=1; i<=n; i++)
    {
        visited[i]=0;
        adj[i].clear();
    }
}
void solve(int n,int m)
{

    clear(n);
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1; i<=n; i++)
    {
        if(!visited[i]) dfs(i);
    }
    reverse(ordered.begin(),ordered.end());
    vector<int>pos(n+1);
    for(int i=0; i<ordered.size(); i++)
    {
        pos[ordered[i]]=i;
    }
    for(int u=1; u<=n; u++)
    {
        for(auto v : adj[u])
        {
            if(pos[u]>pos[v])
            {
                cout<<"IMPOSSIBLE"<<endl;
                return;
            }
        }
    }
    for(auto i:ordered) cout<<i<<" ";
    cout<<endl;
}
int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(m==0&&n==0) break;
        int p=0;
        solve(n,m);

    }

    return 0;
}
