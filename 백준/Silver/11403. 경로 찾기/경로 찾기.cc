#include <iostream>
#include <cstring>

using namespace std;

#define endl '\n'

int n,first=0;
char graph[101][101];
int result[101][101];
int visited[101][101];
void dfs(int x,int y)
{
    for(int i=0; i<n; i++)
    {
        if(graph[x][i]=='1'&&visited[x][i]==0)
        {
            visited[x][i]=1;
            result[first][i]=1;
            //cout<<" x: "<<x<<" i: "<<i<<endl;
            dfs(i,0);
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
            cin>>graph[i][j];
        }
    } 
    
    for(int i=0; i<n; i++)
    {
        //cout<<" i : "<<i<<endl;
        first=i;
        dfs(i,0);
        
        memset(visited,false,sizeof(visited));
    }
    
    for(int i=0; i<n; i++)   
    {
        for(int j=0; j<n; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    return 0;
}
