#include <iostream>

using namespace std;
#define endl '\n'


int arr[101][101];
bool visited[101];
int n,m,cnt=0;

void dfs(int x)
{
    visited[x]=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[x][i]==1&&visited[i]==0)
        {
            //cout<<" x : "<<x<<" i : "<<i<<endl;
            cnt++;
            dfs(i);
        }
    }
}
int main()
{
    
    cin>>n;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }

    dfs(1);
    cout<<cnt;


    return 0;
}
