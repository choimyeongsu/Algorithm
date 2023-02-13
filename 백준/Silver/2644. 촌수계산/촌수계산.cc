#include <iostream>
#include <queue>
using namespace std;

#define endl '\n'
int n,m,a,b;
int graph[101][101];
int visited[101];
queue<int> q;
int cnt=0,result=0;
bool flag=false;
void bfs(int x)
{
    
    q.push(x);
    while(q.size()!=0)
    {
        int v=q.front();
        q.pop();
        for(int i=1; i<=n; i++)
        {
            if(graph[v][i]==1&&visited[i]==0)
            {
                //cout<<" v: "<<v<<" i: "<<i<<endl;
                q.push(i);             
                visited[i]=visited[v]+1;
            }
        }
    }
}
int main()
{
    cin>>n>>a>>b>>m;
    
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }

    bfs(b);
    if(visited[a]==0)
    {
        cout<<-1;
    }
    else cout<<visited[a];

    return 0;
}