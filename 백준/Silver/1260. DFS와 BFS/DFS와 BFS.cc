#include <bits/stdc++.h>

using namespace std;

//n=정점의 개수,m=간선의개수,v=탐색을 시작하는 정점의 번호
int n,m,v;
int arr[1001][1001];
queue <int> q;
// visited배열은 방문체크해준다. 방문하면 =1로표시
int visited[1001];
void DFS(int start)
{
    cout<<start<<" ";    
    for(int i=1; i<=n; i++)
    {
        //간선이 존재하고 방문을 안했으면
        if(arr[start][i]==1&&visited[i]!=1)
        {            
            visited[i]=1;
            DFS(i);            
        }
    }
}
void BFS(int start)
{
    q.push(start);
    visited[start]=1;
    //큐의 사이즈가 0이아닐때까지 반복
    while(q.size()!=0)
    {
        start=q.front();
        q.pop();
        cout<<start<<" ";
        for(int i=1; i<=n; i++)
        {
            if(arr[start][i]==1&&visited[i]!=1)
            {
                visited[i]=1;
                q.push(i);
            }
        }
        
    }
    
    
}
int main()
{
    cin>>n>>m>>v;
    
    //m개의 줄에는 간선이 연결하는 두정점의 번호 입력
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        //무방향 그래프 이므로 (x,y) (y,x)둘다 1로 초기화 
        arr[x][y]=1;
        arr[y][x]=1;                 
    }
    
    //DFS 함수 실행 시작하는 정점의 번호 V
    visited[v]=1;
    DFS(v);
    cout<<'\n';
    //visit 배열 초기화
    memset(visited,false,sizeof(visited));
    //BFS 함수 실행 v는 시작하는 정점의 번호
    BFS(v);
    
}