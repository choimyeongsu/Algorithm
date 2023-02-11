#include <iostream>
#include <cstring>

using namespace std;

#define endl '\n'

int n,m,k,range,ans=0,cnt=-1;
int graph[101][101];
bool visited[101][101];
int dx[6]={0,-1,0,1,0};
int dy[6]={0,0,1,0,-1};

void dfs(int x, int y)
{
    for(int i=0; i<6; i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(graph[tx][ty]==1&&visited[tx][ty]==0)
        {
            ans++;
            visited[tx][ty]=1;
            //cout<<" tx : "<<tx<<" ty : "<<ty<<endl;
            dfs(tx,ty);
        }
    }
}
int main()
{
    cin>>n>>m>>k;
    if(n>=m)
    {
        range=n;
    }
    else range=m;
    for(int i=0; i<k; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a][b]=1;
    }    

    for(int i=1; i<=range; i++)
    {
       for(int j=1; j<=range; j++)
       {
           //cout<<" i : "<<i<<" j : "<<j<<endl;
           dfs(i,j);
           if(ans>cnt)
           {
              cnt=ans;
           }
           ans=0;
       }
    }
    cout<<cnt;
    
    return 0;
}
