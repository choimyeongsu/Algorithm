#include <iostream>
#include <algorithm>

using namespace std;
#define endl '\n'


int n,maxheight=-1;
int arr[101][101];
bool visited[101][101];
//dx는  위 아래. 순서대로 자기자신 위 오른쪽 아래 왼쪽 
int dx[6]={0,-1,0,1,0};
//dy는 좌우. 순서대로 자기자신 ..
int dy[6]={0,0,1,0,-1};

void dfs(int x, int y)
{
    for(int i=0; i<5; i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(visited[tx][ty]==0&&tx>=0&&tx<=n&&ty>=0&&ty<=n)
        {
            //cout<<" tx : "<<tx<<" ty : "<<ty<<endl;
            visited[tx][ty]=1;
            dfs(tx,ty);

        }
    }
}

void checkvisit()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }  
      
}
int main()
{
    int dfscnt=0,dfsmax=-1;    
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>maxheight)
            {
                maxheight=arr[i][j];
            }
        }
    }
    
    int number=0;
    while(1)
    {
        //cout<<" number : "<<number<<endl;
        
        

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
              if(arr[i][j]<=number)
              {
                  visited[i][j]=1;
              }         
            }
        }  
        //dfs 실시 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(visited[i][j]==0)
                {
                    dfs(i,j);
                    dfscnt++;
                    if(dfscnt>dfsmax)
                    {
                        dfsmax=dfscnt;
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                visited[i][j]=0;
            }
        }
        
        //종료조건 
        if(number==maxheight) break;
        number++;
        dfscnt=0;
    }

    cout<<dfsmax<<endl;
    
    
    
    


    return 0;
}