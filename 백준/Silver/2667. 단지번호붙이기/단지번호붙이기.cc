#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int n;
char arr[26][26];
bool visited[26][26];
//dx는 위아래 움직이는
int dx[5]={0,-1,0,1,0};
//dy는 상화좌우 움직이는 
int dy[5]={0,0,1,0,-1};
//result는 단지수
int result=0;
int cnt=0;
int homecnt[1000];
void dfs(int x, int y)
{
    

    for(int i=0; i<5; i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(arr[tx][ty]=='1'&&visited[tx][ty]==0&&tx>=0&&tx<=625&&ty>=0&&ty<=625) 
        {
            //cout<<" tx : "<<tx<< " ty : "<<ty<<endl;
            visited[tx][ty]=1;
            cnt++;
            dfs(tx,ty);
        }

    }
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //집이 있는곳
            if(arr[i][j]=='1')
            {
                //방문을 안했으면 
                if(visited[i][j]==0)
                {
                    dfs(i,j);
                    
                        homecnt[result]=cnt;
                        result++;
                        cnt=0;
                    
                    
                    
                }
            }
        }
    }

    cout<<result<<endl;
    sort(homecnt,homecnt+result);
    for(int i=0; i<result; i++)
    {
        cout<<homecnt[i]<<endl;
    }

    return 0;
}