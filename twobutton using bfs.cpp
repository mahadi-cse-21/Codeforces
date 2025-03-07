#include<bits/stdc++.h>
using namespace std;
vector<int>adj[50000];
int visited[50000];
int dis[50000];
void clear()
{
    for(int i=0; i<50000; i++)
    {
        visited[i]=0;
        dis[i]=0;
    }
}
void bfs(int a,int b)
{
    visited[a]=1;
    dis[a]=0;
    queue<int>q;
    q.push(a);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(u>1) adj[u].push_back(u-1);
        if(u<b) adj[u].push_back(u*2);
        int tmp=0;
        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
           // cout<<" v = "<<v<<endl;
            if(!visited[v])
            {
                visited[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
            if(v==b)
            {
                tmp=-1;
                break;
            }
        }
        if(tmp==-1)
        {
            cout<<dis[b];
            break;
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    bfs(a,b);
    clear();
    return 0;
}
