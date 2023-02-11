#include <bits/stdc++.h>

using namespace std;

int n,m;
int visited[1001]={0, };
int arr[10001][10001]={0, };
int result=0;

void DFSall(int start)
{    
    //방문했으면 1로 표시
    visited[start]=1;

    for(int i=1; i<=n; i++)
    {
        if(arr[start][i]==1&&visited[i]==0)
        {
            DFSall(i);
        }
    }
        

}

//방문하지 않은 정점을 볼 때마다 DFS를 시작해준다
//이때 방문을 시도하는 횟수가 컴포턴트의 개수가 된다.
int main()
{
    cin>>n>>m;
    
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1,arr[b][a]=1;

    }    
    for(int i=1; i<=n; i++)
    {
        //방문하지 않았다면 함수실행 하고 result++;
        if(visited[i]==0)
        {
            DFSall(i);
            result++;
        }
    }
    cout<<result;

    return 0;
}