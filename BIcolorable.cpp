
#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
map<string, int> id;
string name[100];
int color[201];
int visited[201], dis[100], par[100];
int roll = 1;

int bfs(int s) {
    queue<int> q;
    visited[s] = 1;
    color[s]=1;
    q.push(s);
    int tmp=1;
    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++) {
            int v = adj[u][i];
            if(visited[v]==0) {
                if(color[u]==1) {
                    color[v]=2;
                }
                else
                {
                    color[v]=1;
                }
                visited[v] = 1;
                q.push(v);
            }
            if(color[v]==color[u])
            {
                tmp=-1;
                break;
            }
        }
    }
    return tmp;
}

void path(int s, int flag) {
    if(s==-1)   return;
    path(par[s],1);
    if(flag==0) {
        cout<<name[s];
    }
    else    cout<<name[s]<<"//";
}
void clear(){
for(int i=0;i<201;i++)
{
adj[i].clear();
visited[i]=0;
}
}

int main() {

    int n;
    while(1) {
    cin>>n;
    if(n==0)
    break ;
    clear();
        int e;
        cin>>e;
        while(e--) {
            int  u, v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int res= bfs(0);
    if(res==-1) cout<<"NOT BICOLORABLE."<<endl;
    else
        cout<<"BICOLORABLE."<<endl;
    }
}
