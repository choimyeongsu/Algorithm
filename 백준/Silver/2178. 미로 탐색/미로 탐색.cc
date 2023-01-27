#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int n,m;
char arr[101][101];
bool visited[101][101];
int dx[6]={-1,0,1,0};
int dy[6]={0,1,0,-1};
int cnt=0,maxcnt=1000;

queue <pair<int,int>> q;
int result[101][101];

void bfs(int x, int y)
{
    q.push(make_pair(x,y));
    visited[x][y]=1;
    while(q.size()!=0)
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(arr[tx][ty]=='1'&&visited[tx][ty]==0&&tx>=0&&tx<=100&&ty>=0&&ty<=100)
            {
                //cout<<" tx: "<<tx<<" ty: "<<ty;
                result[tx][ty]=result[x][y]+1;
                //cout<<" result ["<<tx<<"]"<<"["<<ty<<"] : "<<result[tx][ty]<<endl;
                visited[tx][ty]=1;
                q.push(make_pair(tx,ty));
            }
        }
    }
}
int main()
{
    cin>>n>>m;

    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            
            cin>>arr[i][j];
        }
    }

    
    //dfs(0,0,1);
    bfs(0,0);
    cout<<result[n-1][m-1]+1;

    return 0;
}