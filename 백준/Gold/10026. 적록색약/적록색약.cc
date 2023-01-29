#include <iostream>

using namespace std;

int n;
char arr[101][101];
bool visited[101][101];
//dx는 위아래
int dx[6]={0,-1,0,1,0};
int dy[6]={0,0,1,0,-1};

void rdfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(arr[tx][ty]=='R'&&visited[tx][ty]==0&&tx>=0&&tx<=n&&ty>=0&&ty<=n)
            {
                visited[tx][ty]=1;
                rdfs(tx,ty);
            }
        }
    }
}
void bdfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(arr[tx][ty]=='B'&&visited[tx][ty]==0&&tx>=0&&tx<=n&&ty>=0&&ty<=n)
            {
                visited[tx][ty]=1;
                bdfs(tx,ty);
            }
        }
    }
}
void gdfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(arr[tx][ty]=='G'&&visited[tx][ty]==0&&tx>=0&&tx<=n&&ty>=0&&ty<=n)
            {
                visited[tx][ty]=1;
                gdfs(tx,ty);
            }
        }
    }
}

void rgdfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(arr[tx][ty]=='G'||arr[tx][ty]=='R')
            {
                if(visited[tx][ty]==0&&tx>=0&&tx<=n&&ty>=0&&ty<=n)
                {
                    visited[tx][ty]=1;
                    rgdfs(tx,ty);
                }
            }
        }
    }
}
int main()
{
    int normal=0,abnormal=0;    
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // 적록생맹이 아닌경우
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(visited[i][j]==0)
            {
                if(arr[i][j]=='R')
                {
                    rdfs(i,j);
                    normal++;
                }
                else if(arr[i][j]=='B')
                {
                    bdfs(i,j);
                    normal++;
                }
                else if(arr[i][j]=='G')
                {
                    gdfs(i,j);
                    normal++;
                }
            }
        }
    }
    //적록생맹인 경우
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            visited[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(visited[i][j]==0)
            {
                if(arr[i][j]=='R'||arr[i][j]=='G')
                {
                    rgdfs(i,j);
                    abnormal++;
                }
                else if(arr[i][j]=='B')
                {
                    bdfs(i,j);
                    abnormal++;
                }
            }
        }
    }
    cout<<normal<<" "<<abnormal<<endl;
    return 0;
}