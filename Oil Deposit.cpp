#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int visited[1000];
void dfs(int s)
{
     visited[s]=1;
     for(int i=0;i<adj[s].size();i++)
    {
         int v = adj[s][i];
       if(visited[v]==0) dfs(v);
    }


}
int main()
{
    int m,n;
    while(1)
    {
        cin>>m;
        cin>>n;
        if(m==0) break;
        vector<pair<int,int>>v;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                char p;
                cin>>p;
                if(p=='@') v.push_back({i,j});
            }
        }
        for(auto it:v)
        {
            adj[it.first].push_back(it.second);
        }
        int max1 = max(m,n);
        for(int i=1;i<=max1;i++)
        {
            visited[i]=0;
        }
        int count=0;
        for(int i=1;i<=max1;i++)
        {
            if(visited[i]==0) {
                    dfs(i);
                    count++;
            }
        }
        cout<<count<<endl;



    }

    return 0;
}

