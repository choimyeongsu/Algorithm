#include <iostream>

using namespace std;
#define endl '\n'

int m,n,k;
int arr[51][51];
bool visited[51][51];
int dx[5]={0,-1,0,1,0};
int dy[5]={0,0,1,0,-1};
int cnt=0;

void dfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(arr[tx][ty]==1&&visited[tx][ty]==0&&tx>=0&&tx<=51&&ty>=0&&ty<=51)
        {
            //cout<<" tx : "<<tx<<" ty : "<<ty<<endl;
            visited[tx][ty]=1;
            dfs(tx,ty);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>m>>n>>k;
        for(int i=0; i<k; i++)
        {
            int x,y;
            cin>>x>>y;
            arr[y][x]=1;
        }
        /*
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<arr[i][j]<<" ";                
            }
            cout<<endl;
        }
        */
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(visited[i][j]==0&&arr[i][j]==1)
                {
                    //cout<<" i : "<<i<<" j: "<<j<<endl;
                    cnt++;
                    dfs(i,j);
                }
                
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                visited[i][j]=0;
                arr[i][j]=0;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
        
        
    }
    


    return 0;
}
