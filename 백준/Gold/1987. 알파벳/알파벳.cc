#include <iostream>

using namespace std;
#define endl '\n'


int r,c;
char arr[21][21];
bool visited[21][21];
bool alphavisited[26];
int dx[6]={-1,0,1,0};
int dy[6]={0,1,0,-1};

int maxcnt=0,cnt=1;
void dfs(int x,int y)
{
    if(cnt>maxcnt)
    {
        maxcnt=cnt;
    }
    for(int i=0; i<4; i++)
    {
        
        int tx=x+dx[i];
        int ty=y+dy[i];
           
        if(visited[tx][ty]==0&&tx>=0&&tx<r&&ty>=0&&ty<c)
        {
           //정수형으로 
           int temp=(int)arr[tx][ty]-65;
           
           if(alphavisited[temp]==0)
           {
               //cout<<" temp: "<<temp;
               alphavisited[temp]=1;
               visited[tx][ty]=1;
               cnt++;
               //cout<<" tx : "<<tx<<" ty : "<<ty<<" cnt : "<<cnt<<" go dfs "<<endl;
               dfs(tx,ty);
               //cout<<" back "<<endl;
               cnt--;
               alphavisited[temp]=0;
               visited[tx][ty]=0;
           }
           
    
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];

        }
    }
    int first=(int)arr[0][0]-65;
    //cout<<first<<endl;
    alphavisited[first]=1;
    visited[0][0]=1;
   
    dfs(0,0);
    cout<<maxcnt;

    return 0;
}
