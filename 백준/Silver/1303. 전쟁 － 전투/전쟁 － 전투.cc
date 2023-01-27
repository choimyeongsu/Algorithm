//블루(적군) : 64+1 = 65
//화이트(아군) : 81+49 = 130
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int n,m;
char arr[101][101];
int dx[6]={0,-1,0,1,0}; // 좌우 이동
int dy[6]={0,0,1,0,-1}; // 상하 이동 
bool visited[101][101];
int wcnt=0,bcnt=0;

void wdfs(int x, int y)
{
    if(arr[x][y]=='W')
    {
        //cout<<" x : "<<x<<" y : "<<y<<endl;
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[j];
            int ty=y+dy[j];
            //cout<<" tx : "<<tx<<" ty : "<<ty<<endl;
            if(arr[tx][ty]=='W'&&visited[tx][ty]==0&&tx>=0&&tx<=100&&ty>=0&&ty<=100)
            {
                visited[tx][ty]=1;
                wcnt++;
                //cout<<" go dfs "<<endl;
                wdfs(tx,ty);
            }
        }
    }
}
void bdfs(int x, int y)
{
    if(arr[x][y]=='B')
    {
        //cout<<" x : "<<x<<" y : "<<y<<endl;
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[j];
            int ty=y+dy[j];
            //cout<<" tx : "<<tx<<" ty : "<<ty<<endl;
            if(arr[tx][ty]=='B'&&visited[tx][ty]==0&&tx>=0&&tx<=100&&ty>=0&&ty<=100)
            {
                visited[tx][ty]=1;
                bcnt++;
                //cout<<" go dfs "<<endl;
                bdfs(tx,ty);
            }
        }
    }
}
int main()
{
    int sw=0,sb=0;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout<<" i: "<<i<<" j: "<<j<<endl;
            if(visited[i][j]==0)
            {
                wdfs(i,j);
            }
            sw=sw+(wcnt*wcnt);
            //cout<<" i: "<<i<<" j: "<<j;
            //cout<<" wcnt : "<<wcnt<<endl;
            wcnt=0;
        }
    }
    //cout<<"BBBBBBBBBBBBBBBBBBBBBBBBBBB"<<endl;
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout<<" i: "<<i<<" j: "<<j<<endl;
            if(visited[i][j]==0)
            {
                bdfs(i,j);
            }
            sb=sb+(bcnt*bcnt);
            //cout<<" i: "<<i<<" j: "<<j;
            //cout<<" wcnt : "<<wcnt<<endl;
            bcnt=0;
        }
    }
    cout<<sw<<" "<<sb;
    return 0;
}